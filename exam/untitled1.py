sesli_harfler = 'aeıioöuü'
sayaç = 0

kelime = input('Bir kelime girin: ')

for harf in kelime:
    if harf in sesli_harfler:
        sayaç += 1

mesaj = '{} kelimesinde {} sesli harf var.'
print(mesaj.format(kelime, sayaç))
#-------------------------------------------------------------------------
sesli_harfler = 'aeıioöuü'
sayaç = 0

kelime = input('Bir kelime girin: ')

def seslidir(harf):
    return harf in sesli_harfler

for harf in kelime:
    if seslidir(harf):
        sayaç += 1
mesaj = '{} kelimesinde {} sesli harf var.'
print(mesaj.format(kelime, sayaç))
#--------------------------------------------------------------------------
sesli_harfler = 'aeıioöuü'
sayaç = 0

kelime = input('Bir kelime girin: ')

def seslidir(harf):
    return harf in sesli_harfler

def artır():
    global sayaç
    for harf in kelime:
        if seslidir(harf):
            sayaç += 1
    return sayaç

mesaj = '{} kelimesinde {} sesli harf var.'
print(mesaj.format(kelime, artır)
#--------------------------------------------------------------------------
sesli_harfler = 'aeıioöuü'
sayaç = 0

def kelime_sor():
    return input('Bir kelime girin: ')

def seslidir(harf):
    return harf in sesli_harfler

def artır(sayaç, kelime):
    for harf in kelime:
        if seslidir(harf):
            sayaç += 1
    return sayaç

def ekrana_bas(kelime):
    mesaj = "{} kelimesinde {} sesli harf var."
    print(mesaj.format(kelime, artır(sayaç, kelime)))

def çalıştır():
    kelime = kelime_sor()
    ekrana_bas(kelime)

çalıştır()
#---------------------------------------------------------------------------
class HarfSayacı:
    def __init__(self):
        self.sesli_harfler = 'aeıioöuü'
        self.sessiz_harfler = 'bcçdfgğhjklmnprsştvyz'
        self.sayaç_sesli = 0
        self.sayaç_sessiz = 0

    def kelime_sor(self):
        return input('Bir kelime girin: ')

    def seslidir(self, harf):
        return harf in self.sesli_harfler

    def sessizdir(self, harf):
        return harf in self.sessiz_harfler

    def artır(self):
        for harf in self.kelime:
            if self.seslidir(harf):
                self.sayaç_sesli += 1
            if self.sessizdir(harf):
                self.sayaç_sessiz += 1
        return (self.sayaç_sesli, self.sayaç_sessiz)

    def ekrana_bas(self):
        sesli, sessiz = self.artır()
        mesaj = "{} kelimesinde {} sesli {} sessiz harf var."
        print(mesaj.format(self.kelime, sesli, sessiz))

    def çalıştır(self):
        self.kelime = self.kelime_sor()
        self.ekrana_bas()

if __name__ == '__main__':
    sayaç = HarfSayacı()
    sayaç.çalıştır()


