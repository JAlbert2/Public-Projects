#!/usr/bin/python
import RPi.GPIO as GPIO
import time, sys, datetime
print('Begin')

GPIO.setmode(GPIO.BOARD)
inpt=13
GPIO.setup(inpt, GPIO.IN)
rate_cnt=0
tot_cnt=0
time_zero=0.0
time_start=0.0
time_end=0.0
gpio_last=0
constant=1.79

now=datetime.datetime.now()

file=open('log'+str(now.strftime('%m%d%Y'))+'.txt','a')
stop=open('stop_file.txt','w')
stop.write('')
stop.close()
stop=open('stop_file.txt','r')

time_zero=time.time()
while True:
    rate_cnt=0
    pulses=0
    time_start=time.time()
    while pulses<=5: 
        gpio_cur=GPIO.input(inpt)
        if gpio_cur!=0 and gpio_cur!=gpio_last:
            pulses+=1
        gpio_last=gpio_cur

        finish=stop.readline()
        if finish=='terminate '+str(now.strftime('%m/%d/%Y')):
            print('\nExiting')
            GPIO.cleanup()
            file.close()
            stop.close()
            print('End')
            sys.exit()

    rate_cnt+=1
    tot_cnt+=1
    time_end=time.time()

    print('\nLiters/min ', round((rate_cnt*constant)/(time_end-time_start),2))
    print('\tTotal Liters ', round(tot_cnt*constant,1))
    print('\tTime (min&clock) ', round((time.time()-time_zero)/60,2), '\t', time.asctime(time.localtime(time.time())), '\n')

    file.write('\nLiters/min '+str(round((rate_cnt*constant)/(time_end-time_start),2)))
    file.write('\tTotal Liters '+str(round(tot_cnt*constant,1)))
    file.write('\tTime (min&clock) '+str(round((time.time()-time_zero)/60,2))+'\t'+ str(time.asctime(time.localtime(time.time())))+'\n')
