# -*- coding: utf-8 -*-
"""
Created on Thu Jun 30 15:39:33 2016

@author: angellin
"""

#------------------------火锅-----------------------------------------------
from bs4 import BeautifulSoup  
from urllib import urlopen  
soup=BeautifulSoup(urlopen('https://bj.nuomi.com/364/406'))  
titles=soup.find_all('h4',class_="title") 
print len(titles)  #80 
for title in titles:
    print title.get_text()
    with open('test1.txt','a') as f:    
        f.write(title.get_text().encode('utf-8'))
        f.write('\n')


prices=soup.find_all('span',class_="price")  
print len(prices)   #80
for price in prices:
    print price.get_text()  
    with open('test1.txt','a') as f:    
        f.write(price.get_text().encode('utf-8'))
        f.write('\n')


comments=soup.find_all('span',class_="comment")  
print len(comments)  #79 有家店暂无评分
for comment in comments:
    print comment.get_text()
    with open('test1.txt','a') as f:    
        f.write(comment.get_text().encode('utf-8'))
        f.write('\n')
    
#--------------------------小吃快餐-----------------------------------------------
soup=BeautifulSoup(urlopen('https://bj.nuomi.com/380/406'))  
titles=soup.find_all('h4',class_="title")  
print len(titles)  #80
for title in titles:
    print title.get_text()
    with open('test2.txt','a') as f:    
        f.write(title.get_text().encode('utf-8'))
        f.write('\n')


prices=soup.find_all('span',class_="price")  
print len(prices)   #80
for price in prices:
    print price.get_text()  
    with open('test2.txt','a') as f:    
        f.write(price.get_text().encode('utf-8'))
        f.write('\n')


comments=soup.find_all('span',class_="comment")  
print len(comments)  #80
for comment in comments:
    print comment.get_text()
    with open('test2.txt','a') as f:    
        f.write(comment.get_text().encode('utf-8'))
        f.write('\n')
#---------------------蛋糕------------------------------------------------------
        
soup=BeautifulSoup(urlopen('https://bj.nuomi.com/881/406-1397'))  
titles=soup.find_all('h4',class_="title")  
print len(titles)  #80
for title in titles:
    print title.get_text()
    with open('test3.txt','a') as f:    
        f.write(title.get_text().encode('utf-8'))
        f.write('\n')


prices=soup.find_all('span',class_="price")  
print len(prices)   #80
for price in prices:
    print price.get_text()  
    with open('test3.txt','a') as f:    
        f.write(price.get_text().encode('utf-8'))
        f.write('\n')


comments=soup.find_all('span',class_="comment")  
print len(comments)  #79
for comment in comments:
    print comment.get_text()
    with open('test3.txt','a') as f:    
        f.write(comment.get_text().encode('utf-8'))
        f.write('\n')
        
#------------------------自助--------------------------------------------------        
soup=BeautifulSoup(urlopen('https://www.nuomi.com/search?k=%E8%87%AA%E5%8A%A9%E6%98%8C%E5%B9%B3'))  
titles=soup.find_all('h4',class_="title")  
print len(titles)  #80
for title in titles:
    print title.get_text()
    with open('test4.txt','a') as f:    
        f.write(title.get_text().encode('utf-8'))
        f.write('\n')


prices=soup.find_all('span',class_="price")  
print len(prices)   #80
for price in prices:
    print price.get_text()  
    with open('test4.txt','a') as f:    
        f.write(price.get_text().encode('utf-8'))
        f.write('\n')


comments=soup.find_all('span',class_="comment")  
print len(comments)  #79
for comment in comments:
    print comment.get_text()
    with open('test4.txt','a') as f:    
        f.write(comment.get_text().encode('utf-8'))
        f.write('\n')
        
        
