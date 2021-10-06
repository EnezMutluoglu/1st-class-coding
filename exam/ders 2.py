# -*- coding: utf-8 -*-
"""
Created on Fri Mar 15 14:13:35 2019

@author: ejder
"""

 book = "The Hitchhiker's Guide to the Galaxy"
 booklist = list(book)
 booklist
 booklist[0:3]
 ''.join(booklist[0:3])
 #------------------------------------------------------
 ad="ahmet"
 ls=list(ad)
 for ch in ls:
     print('\t',ch)
#--------------------------------------------------------
     #sözlük oluşturma
person3 = { 'Name': 'Ford Prefect',
 'Gender': 'Male',
 'Occupation': 'Researcher',
 'Home Planet': 'Betelgeuse Seven' }

#-----------------------------------------

 def search4vowels():
     vowels = set('aeiou')
     word = input("Provide a word to search for vowels: ")
     found = vowels.intersection(set(word))
     for vowel in found:
         print(vowel)
    
search4vowels()

#---------------------------------------------

def faktoriel(sayı):
    f=1
    for i in range(1,sayı+1):
        f=f*i
    print(sayı,'faktöriel :',f)
faktoriel(5)
#♣----------------------------------------------

def enbuyuk(sayı1,sayı2):
    if(sayı1>sayı2):
        print("en büyük sayı",sayı1)
    else:
        print("en büyük sayı",sayı2)
enbuyuk(9,20)
#○------------------------------------------------


def enbuyuk(sayı1,sayı2):
    if(sayı1>sayı2):
        print("en büyük sayı",sayı1)
    else:
        print("en büyük sayı",sayı2)
sayı1=input("1.sayıyı gir:")
sayı2=input("2.sayıyı gir:")
enbuyuk(int(sayı1),int(sayı2))
#--------------------------------------------------

