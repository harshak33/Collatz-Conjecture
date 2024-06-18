i = 1
while True:
    a = i
    b = 0
    print("Log ",i,":",end = "")
    while a!=4:
        if a%2 == 0:
            a/=2;
        else:
            a = a*3+1
        b+=1
    print(b)
    i+=1