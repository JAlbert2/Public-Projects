#!/usr/bin/python
import datetime

print('Begin')
now=datetime.datetime.now()
file=open('log'+str(now.strftime('%m%d%Y'))+'.txt','r')
raw=file.readlines()
file.close()

file=open('runningTotal.txt','r')
total=float(file.readline())
file.close()
todayData=raw[-1]
begin=todayData.index('Total Liters')+12
end=begin+6
print(begin,end,todayData)
print(todayData[begin:end])
today=float(todayData[begin:end])

file=open('runningTotal.txt','w')
file.write(str(total+today))
file.close()
print('End')
