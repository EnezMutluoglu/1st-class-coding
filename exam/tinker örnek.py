from tkinter import *
pencere = Tk()

rakam1 = Button(text = "buton 1",fg="red",bg="yellow")
rakam2 = Button(text = "buton 2",fg="blue",bg="yellow")
rakam3 = Button(text = "buton 3",fg="green",bg="yellow")

rakam1.pack(side=RIGHT)
rakam2.pack()
rakam3.pack(side = LEFT)


yazi = Label(text = "Merhaba Python severler")

yazi.pack(side = LEFT)
pencere.mainloop()
#------------------------------------------------------------------------------
from tkinter import *
pencere = Tk()
asilisim="mahmut"
asilparola="mehmet"
def girisyapma():
    parola = parolagiris.get()
    isim = isimgiris.get()
    if (parola == asilparola and isim == asilisim):
        girisdurumu.config(text="Doğru",bg="green")
    else:
        girisdurumu.config(text="Yanlış",bg="red")

isim  = Label(pencere,text = "adınız")
isim.grid(row=0,column=0)
isimgiris = Entry(pencere,width="8")
isimgiris.grid(row=0,column=1)
parola = Label(pencere,text="şiferniz")
parolagiris = Entry(pencere,width="8",show="*")
parola.grid(row=1,column=0)
parolagiris.grid(row=1,column=1)
sifremihatirla =Checkbutton(pencere,text="şifremi hatırla")
sifremihatirla.grid(row=2,columnspan=2)
giris = Button(pencere,text="giriş",command=girisyapma)
giris.grid(row=3,column=0)
girisdurumu = Label(pencere,text="")
girisdurumu.grid(row=3,column=1)

pencere.mainloop()

#------------------------------------------------------------------------------
import tkinter
import tkinter.ttk as ttk

pen = tkinter.Tk()
x = 0

def merhaba(alfa):
    global x
    x = x+1
    print('merhaba', alfa)
    btn.config(text="merhaba"+str(x))


btn = ttk.Button(text='merhaba', command =lambda:  merhaba("can"))
btn.pack(padx=20, pady=20)

pen.mainloop()
#------------------------------------------------------------------------------
from tkinter import *
from tkinter import messagebox
from time import *

pencere = Tk()

pencere.title("Python Programlama Tkinter")
pencere.geometry("500x250")

uygulama = Frame(pencere)
uygulama.grid()


def dialog():
    var = messagebox.showinfo("Uyarı", "Python Programlama")
    print(var)
    sleep(2)
    yok = messagebox.askyesnocancel("hata","uyarı aldınız")
    if yok == True:
        return dialog()
button1 = Button(uygulama, text=" Mesaj Ver ", width=20, command=dialog)
button1.grid(padx=110, pady=80)

# pencereyi ekranda tut
pencere.mainloop()
#------------------------------------------------------------------------------
from tkinter import *

pencere = Tk()
kasa = []
def alan_guncelle(sayi):
    icerik = hesap_alani.get() + sayi
    hesap_alani.delete(0, END)
    hesap_alani.insert(0, icerik)
    return icerik


def islem_yap(islem):
    icerik = hesap_alani.get()

    if len(kasa) == 0:
        kasa.append(alan_guncelle(""))
        kasa.append(islem)
        hesap_alani.delete(0, END)
#        print(kasa)
    elif icerik == "" and len(kasa) == 2 and (islem == "+" or islem == "*" or islem == "-" or islem == "/"):
        kasa[1]=islem
        hesap_alani.delete(0, END)
    elif icerik != "" and len(kasa) == 2 and (islem == "+" or islem == "*" or islem == "-" or islem == "/"):
        sayi1, sayi2 = float(kasa[0]),float(icerik)
        if islem == "+":
            sonuc = sayi1 + sayi2
        elif islem == "-":
            sonuc = sayi1 - sayi2
        elif islem == "*":
            sonuc = sayi1 * sayi2
        elif islem == "/":
            if sayi2 !=0 or sayi2 !=00 or sayi2 !=000:
                sonuc = sayi1 / sayi2
            else:
                sonuc = sayi2
                print(" Sıfra Bölme Hatası")
        kasa[0], kasa[1] = str(sayi2), islem
        hesap_alani.delete(0, END)
        hesap_alani.insert(0, sonuc)
        print(kasa)
        return sonuc
    if islem == "=":

        return sonuc_goster(islem_yap(kasa[1]))
def sonuc_goster(sayi):
    hesap_alani.delete(0, END)
    hesap_alani.insert(0, sayi)


hesap_alani = Entry(pencere)
hesap_alani.insert(0, "")
hesap_alani.grid(row=0, columnspan=5)


buton_01 = Button(pencere, text = "1",command=lambda: alan_guncelle(str(1)))
buton_01.grid(row=1, column=0)
buton_02 = Button(pencere, text="2", command=lambda: alan_guncelle(str(2)))
buton_02.grid(row=1, column=1)
buton_03 = Button(pencere, text="3", command=lambda: alan_guncelle(str(3)))
buton_03.grid(row=1, column=2)
buton_topla = Button(pencere, text = "+", command=lambda: islem_yap(str("+")))
buton_topla.grid(row=1, column=3)
buton_esittir = Button(pencere, text = "=",command= lambda: islem_yap(str("=")))
buton_esittir.grid(rowspan=4, column=4, sticky=W+E+N+S)

buton_04 = Button(pencere, text="4", command=lambda: alan_guncelle(str(4)))
buton_04.grid(row = 2, column=0)
buton_05 = Button(pencere, text = "5",command= lambda: alan_guncelle(str(5)))
buton_05.grid(row = 2, column=1)
buton_06 = Button(pencere, text = "6",command= lambda: alan_guncelle(str(6)))
buton_06.grid(row = 2, column=2)
buton_cikart = Button(pencere, text = "-",command= lambda: islem_yap(str("-")))
buton_cikart.grid(row = 2, column=3)

buton_07 = Button(pencere, text = "7", command=lambda: alan_guncelle(str(7)))
buton_07.grid(row = 3, column=0)
buton_08 = Button(pencere, text = "8", command=lambda: alan_guncelle(str(8)))
buton_08.grid(row = 3, column=1)
buton_09 = Button(pencere, text = "9",command=lambda: alan_guncelle(str(9)))
buton_09.grid(row = 3, column=2)
buton_carp = Button(pencere, text = "*",command=lambda: islem_yap(str("*")))
buton_carp.grid(row = 3, column=3)

buton_0 = Button(pencere, text = "0",command=lambda: alan_guncelle(str("0")))
buton_0.grid(row = 4, column=0)
buton_00 = Button(pencere, text = "00",command=lambda: alan_guncelle(str("00")))
buton_00.grid(row = 4, column=1)
buton_000 = Button(pencere, text = "000",command=lambda: alan_guncelle(str("000")))
buton_000.grid(row = 4, column=2)
buton_bol = Button(pencere, text = "/",command= lambda: islem_yap(str("/")))
buton_bol.grid(row = 4, column=3)


buton_esittir = Button(pencere, text = "=",command= lambda: islem_yap(str("=")))



pencere.mainloop()




