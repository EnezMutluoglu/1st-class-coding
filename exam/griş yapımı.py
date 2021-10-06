from tkinter import *
pencere = Tk()
pencere.geometry("450x300+500+350")
asilisim="sonx"
asilparola="ananiz"
def girisyapma():
    parola = parolagiris.get()
    isim = isimgiris.get()
    if (parola == asilparola and isim == asilisim):
        girisdurumu.config(text="Doğru",bg="green")
    else:
        girisdurumu.config(text="Yanlış",bg="red")

frame1=Frame(pencere)
frame1.pack()
frame1.grid(row=3,column=6)
isim  = Label(frame1,text = "adınız")
isim.grid(row=0,column=0)
isimgiris = Entry(frame1,width="8")
isimgiris.grid(row=0,column=1)
parola = Label(frame1,text="şiferniz")
parolagiris = Entry(frame1,width="8",show="*")
parola.grid(row=1,column=0)
parolagiris.grid(row=1,column=1)
sifremihatirla =Checkbutton(frame1,text="şifremi hatırla")
sifremihatirla.grid(row=2,columnspan=2)
giris = Button(frame1,text="giriş",command=girisyapma)
giris.grid(row=3,column=0)
girisdurumu = Label(frame1,text="")
girisdurumu.grid(row=3,column=1)

pencere.mainloop()
