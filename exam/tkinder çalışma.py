from tkinter import *

def callback():
    print("Tıkla!")
    buton2.config(text="tmm bastım")


win = Tk()
win.geometry("600x400")
win.title('deneme')
buton1=Button(win,text="düğme1")
buton2=Button(win,text="düğme2",state=DISABLED)
buton1.pack(side=LEFT,padx=10,pady=20)
buton2.pack(side=RIGHT,padx=10,pady=20)

a=Button(win,text="evet",command=callback)
a.pack(side=LEFT,padx=10)

b=Button(win,text="boyut",width=20,height=3)
b.pack(side=LEFT,padx=10,pady=20)

ckb=Checkbutton(win,text="dedem",command=callback)

ckb.pack()

frame1=Frame(win)
frame1.pack()

frame2=Frame(win)
frame2.pack(side=BOTTOM)

buton3=Button(frame1,text="kırmızı",fg="red",bg="yellow")
buton3.pack(side=TOP)

e=Label(win,text="kafam girsin")
e.grid(row=1,column=3)
e.pack()

win.mainloop()