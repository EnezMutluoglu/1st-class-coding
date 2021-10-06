from tkinter import *

def yaz():
   # print("Butona basıldı")
   return yazi2.config(text="butona basıldı")

pencere=Tk()
pencere.geometry("500x300+400+300")
pencere.title("GUI uygulaması")
button=Button(text="tamam",width=20,height=5,command=yaz)
button.pack()
yazi1=Label(pencere,text="arayüz uygulaması")
yazi1.pack()
yazi2=Label(text="arayüz uygulaması")
yazi2.pack(side=LEFT)
cb=Checkbutton(text="onaylıyorum")
cb.pack()
rb=Radiobutton(text="bay")
rb.pack()
rb1=Radiobutton(text="bayan")
rb1.pack()

metin=Entry(text="metin girin")
metin.pack()
mainloop()

