b=0
d=1
while d==1 :
    a=int(input("bir sayı girin"))

    c=input("işlem değeri")
    if c=="+":
        b=b+a

    elif c=="-":
        b=b-a

    elif c=="/":
        b=b/a

    elif c=="*":
        b=b*a
    elif c=="=":
        print(b)

