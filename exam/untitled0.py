import os

while True:
    x=int(input("bir değer girin"))
    y=int(input("bir değer girin"))
    if x>=0 and y>=0:
        print(x+y)
    elif x>=0 and y<0:
        print(x+(1/y))
    elif x<0 and y>=0:
        print(1/(x+y))
    elif x<0 and y<0:
        print((1/x)+(1/y))
    os.system("cls")
    
    
    
    
    