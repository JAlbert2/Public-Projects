#!/usr/bin/python
import RPi.GPIO as GPIO
import time, sys, datetime
print('Begin')

GPIO.setmode(GPIO.BOARD)
inpt=13
GPIO.setup(inpt, GPIO.IN)
total=0
timeZero=time.time()
timeBegin=0
timeEnd=0
gpioLast=0
const=1.79
now=datetime.datetime.now()

file=open('log'+str(now.strftime('%m%d%Y'))+'.txt','a')
stop=open('stop_file.txt','w')
stop.write('')
stop.close()
stop=open('stop_file.txt','r')

while True:
    rate=0
    pulses=0
    timeBegin=time.time()
    while pulses<=5:
        gpioCur=GPIO.input(inpt)
        if gpioCur!=0 and gpioCur!=gpioLast:
            pulses+=1
            gpioLast=gpioCur
        try:
            None
        except KeyboardInterrupt:
            print('\nExiting')
            GPIO.cleanup()
            file.close()
            stop.close()
            print('End')
            sys.exit()

        finish=stop.readline()
        if finish=='terminate '+str(now.strftime('%m/%d/%Y')):
            print('\nExiting')
            GPIO.cleanup()
            file.close()
            stop.close()
            print('End')
            sys.exit()

        rate+=1
        total+=1
        timeEnd=time.time()

        print('\nLiters/min ', round((rate*const)/(timeEnd-timeBegin),2))
        print('\tTotal Liters ', round(total*const,1))
        print('\tTime (min&clock) ', round((time.time()-timeZero)/60,2), '\t', time.asctime(time.localtime(time.time())), '\n')

        file.write('\nLiters/min '+str(round((rate*const)/(timeEnd-timeBegin),2)))
        file.write('\tTotal Liters '+str(round(total*const,1)))
        file.write('\tTime (min&clock) '+str(round((time.time()-timeZero)/60,2))+'\t'+ str(time.asctime(time.localtime(time.time())))+'\n')
