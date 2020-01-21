#!/usr/bin/python
import datetime, smtplib, ssl
from email.mime.text import MIMEText
from email.mime.multipart import MIMEMultipart


print('Begin')
now=datetime.datetime.now()

file=open('log'+str(now.strftime('%m%d%Y'))+'.txt','r')

raw=file.readlines()
file.close()

port=465
password=#Password
smtp_server='smtp.gmail.com'
sender_email=#Sender email
receiver_email=#Receiving email
message=MIMEMultipart('alternative')
message['Subject']='Water log for '+str(now.strftime('%m/%d/%Y'))

text='''\
'''
html='''\
'''
for i in raw:
    text+=i+'\n'
    html+='<p>'+i+'</p>'
text+='''\
'''
html+='''\
'''
part1=MIMEText(text,'plain')
part2=MIMEText(html,'html')
message.attach(part1)
message.attach(part2)
context = ssl.create_default_context()
server=smtplib.SMTP_SSL(smtp_server, port, context=context)
server.login(sender_email, password)
server.sendmail(sender_email, receiver_email, message.as_string())
print('End')