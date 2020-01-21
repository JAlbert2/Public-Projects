#!/usr/bin/python
# -*- coding: utf-8 -*-
"""
Created on Sat Oct 19 15:11:13 2019

@author: jonah
"""
import requests
from bs4 import BeautifulSoup

import smtplib, ssl
from email.mime.text import MIMEText
from email.mime.multipart import MIMEMultipart
import datetime
import time

import csv

def control():
    masterList={}
    with open('/home/pi/Downloads/Master - Responses.csv') as csv_file:
        csv_reader = csv.reader(csv_file, delimiter=',')
        for row in csv_reader:
            if not row==0:
                masterList[row[1]]=row[2]
            
        for i in masterList:
            if 'Pollock' in masterList[i]:
                pollock(i, masterList[i])
            if 'North' in masterList[i]:
                north(i, masterList[i])
            if 'East' in masterList[i]:
                east(i, masterList[i])
            if 'South' in masterList[i]:
                south(i, masterList[i])
            if 'West' in masterList[i]:
                west(i, masterList[i])

def pollock(address, locations):
    subject='Pollock for '
    if 'Pollock Breakfast' in locations:
        subject+='Breakfast, '
    if 'Pollock Lunch' in locations:
        subject+='Lunch, '
    if 'Pollock Dinner' in locations:
        subject+='Dinner, '
    subject=subject.rstrip(' ')
    subject=subject.rstrip(',')
    strip(pollockRaw, subject, address)

def north(address, locations):
    subject='North for '
    if 'North Breakfast' in locations:
        subject+='Breakfast, '
    if 'North Lunch' in locations:
        subject+='Lunch, '
    if 'North Dinner' in locations:
        subject+='Dinner, '
    subject=subject.rstrip(' ')
    subject=subject.rstrip(',')    
    strip(northRaw, subject, address)
    

def east(address, locations):
    subject='East for '
    if 'East Breakfast' in locations:
        subject+='Breakfast, '
    if 'East Lunch' in locations:
        subject+='Lunch, '
    if 'East Dinner' in locations:
        subject+='Dinner, '
    subject=subject.rstrip(' ')
    subject=subject.rstrip(',')    
    strip(eastRaw, subject, address)
    

def south(address, locations):
    subject='South for '
    if 'South Breakfast' in locations:
        subject+='Breakfast, '
    if 'South Lunch' in locations:
        subject+='Lunch, '
    if 'South Dinner' in locations:
        subject+='Dinner, '
    if 'South Late Night' in locations:
        subject+='Late Night'
    subject=subject.rstrip(' ')
    subject=subject.rstrip(',')
    strip(southRaw, subject, address)
    

def west(address, locations):
    subject='West for '
    if 'West Breakfast' in locations:
        subject+='Breakfast, '
    if 'West Lunch' in locations:
        subject+='Lunch, '
    if 'West Dinner' in locations:
        subject+='Dinner, '
    subject=subject.rstrip(' ')
    subject=subject.rstrip(',')
    strip(westRaw, subject, address)


def scrape(url):    
    response=requests.get(url)
    
    soup=BeautifulSoup(response.text, "html.parser")
    items=soup.findAll()
    
    return items
    
def strip(items, subject, address):
    
    file = open('inputW.txt','w')
    for x in range(len(items)):
        file.write(str(items[x]))
    
    file=open('inputW.txt','r')
    raw=file.readlines()
    file.close()
    
    stuff=[]
    
    for x in range(len(raw)):
        if 'meal-header' in str(raw[x]):
            if 'Breakfast' in raw[x+1]:
                stuff.append('Breakfast')
            elif 'Lunch' in raw[x+1]:
                stuff.append('Lunch')
            elif 'Dinner' in raw[x+1]:
                stuff.append('Dinner')
            elif '4th' in raw[x+1]:
                stuff.append('Late Night')
        
        if 'shortmenurecipes' in raw[x]:
            stuff.append(raw[x])
    
    breakfast=False
    lunch=False
    dinner=False
    lateNight=False
    items=[]
    split={}
    
    for y in range(len(stuff)):
        if('Breakfast' in str(stuff[y]) and not breakfast):
            breakfast=True
            split['Breakfast']=y
        elif('Lunch' in str(stuff[y]) and not lunch):
            lunch=True
            split['Lunch']=y
        elif('Dinner' in str(stuff[y]) and not dinner):
            dinner=True
            split['Dinner']=y
        elif('Late Night' in str(stuff[y]) and not lateNight):
            lateNight=True
            split['Late Night']=y-3
        if(str(stuff[y])[:30]=='<div class="shortmenurecipes">'):            
            items.append(str(stuff[y])[30:-7].replace('&amp;','&'))
    
    items=dup(items,subject)
    
    if 'Breakfast' not in split:
        split['Breakfast']=-1
    if 'Late Night' not in split:
       split['Late Night']=len(items)
    send(items, split, subject, address)
    
        
def dup(items,subject):
    begin=items[0]
    for i in range(len(items)):
        if begin in items[i] and i>25:
            return items[0:i]  
    
    
def send(items, split, subject, address):
    end=len(items)
    port = 465  # For SSL
    password = #Password
    smtp_server = "smtp.gmail.com"
    sender_email = # Enter your address
    receiver_email = address  # Enter receiver address
   
    now = datetime.datetime.now()

    message = MIMEMultipart("alternative")
    message["Subject"] = "Menu for "+subject+' for '+str(now.strftime("%m/%d/%Y"))
    message["From"] = sender_email
    message["To"] = receiver_email
    
    # Create the plain-text and HTML version of your message
    text = """\
    """
    if 'Breakfast' in subject:
        if not split['Breakfast']==-1:
            text+='Breakfast'
            for i in range(split['Breakfast'],split['Lunch']):
                text+=str(items[i])
        else:
            text+=str('Breakfast is not open this morning.')
   
    if 'Lunch' in subject:
        text+='Lunch'
        for j in range(split['Lunch'],split['Dinner']):
            text+=str(items[j])
   
    if 'Dinner' in subject:
        text+='<h2>Dinner</h2>'
        for k in range(split['Dinner'],split['Late Night']):
            text+=str(items[k])
   
    if 'Late Night' in subject:
        if not split['Late Night']==end:
                text+='Late Night'
                for l in range(split['Late Night'],end):
                    text+=str(items[l])
        else:
            text+=str('Late Night is not open tonight.')
    
    html = """\
    <html>
      <body>
        """
    if 'Breakfast' in subject:
        if not split['Breakfast']==-1:
            html+='<h2>Breakfast</h2>'
            for i in range(split['Breakfast'],split['Lunch']):
                html+=str('<p>'+items[i]+'</p>')
        else:
            html+=str('<h3>Breakfast is not open this morning.</h3>')
   
    if 'Lunch' in subject:
        html+='<h2>Lunch</h2>'
        for j in range(split['Lunch'],split['Dinner']):
            html+=str('<p>'+items[j]+'</p>')
   
    if 'Dinner' in subject:
        html+='<h2>Dinner</h2>'
        for k in range(split['Dinner'],split['Late Night']):
            html+=str('<p>'+items[k]+'</p>')
   
    if 'Late Night' in subject:
        if not split['Late Night']==end:
                html+='<h2>Late Night</h2>'
                for l in range(split['Late Night'],end):
                    html+=str('<p>'+items[l]+'</p>')
        else:
            html+=str('<h3>Late Night is not open tonight.</h3>')
        
    html+="""
        
      </body>
    </html>
    """
    # Turn these into plain/html MIMEText objects
    part1 = MIMEText(text, "plain")
    part2 = MIMEText(html, "html")
    
    # Add HTML/plain-text parts to MIMEMultipart message
    # The email client will try to render the last part first
    message.attach(part1)
    message.attach(part2)

    '''file = open('message.txt','w')
    file.write(str(html))
    file.close()'''
    
    context = ssl.create_default_context()
    try:
        server=smtplib.SMTP_SSL(smtp_server, port)
        server.login(sender_email, password)
        server.sendmail(sender_email, receiver_email, message.as_string())
    except:
        errorEmail(address, subject, sender_email, now, port, password, smtp_server)
        
    
def errorEmail(address, subject, sender_email, now, port, password, smtp_server):
    message = MIMEMultipart("alternative")
    message["Subject"] = "Error for:"+address+":"+subject+" "+str(now.strftime("%m/%d/%Y %H:%M"))
    message["From"] = sender_email
    message["To"] = 'jonah.albert2@gmail.com'
    
    context = ssl.create_default_context()
    server= smtplib.SMTP_SSL(smtp_server, port)
    server.login(sender_email, password)
    server.sendmail(sender_email, 'jonah.albert2@gmail.com', message.as_string())
            
            
'''def twice():
    now = datetime.datetime.now()
    file=open('repeat.txt','r')
    lines=file.readlines()
    file.close()
    if now.strftime("%m/%d/%Y") not in lines:
        return True
    else:
        file=open('repeat.txt','a')
        file.write(now.strftime("%m/%d/%Y/n"))
        file.close()
        return False'''

 
#Global variables
pollockRaw=scrape('http://menu.hfs.psu.edu/shortmenu.aspx?sName=Penn+State+Housing+and+Food+Services&locationNum=14&locationName=Pollock+Dining+Commons+&naFlag=1')
time.sleep(1)
northRaw=scrape('http://menu.hfs.psu.edu/shortmenu.aspx?sName=Penn+State+Housing+and+Food+Services&locationNum=17&locationName=North+Food+District&naFlag=1')
time.sleep(1)
eastRaw=scrape('http://menu.hfs.psu.edu/shortmenu.aspx?sName=Penn+State+Housing+and+Food+Services&locationNum=11&locationName=East+Food+District&naFlag=1')
time.sleep(1)
southRaw=scrape('http://menu.hfs.psu.edu/shortmenu.aspx?sName=Penn+State+Housing+and+Food+Services&locationNum=13&locationName=South+Food+District&naFlag=1')
time.sleep(1)
westRaw=scrape('http://menu.hfs.psu.edu/shortmenu.aspx?sName=Penn+State+Housing+and+Food+Services&locationNum=16&locationName=West+Food+District&naFlag=1')

     
if __name__ == "__main__":
    control()
