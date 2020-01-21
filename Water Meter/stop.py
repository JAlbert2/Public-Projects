#!/usr/bin/python
import datetime
print('Begin')

file=open('stop_file.txt','w')
now=datetime.datetime.now()
file.write('terminate '+str(now.strftime('%m/%d/%Y')))
file.flush()
file.close()

print('End')