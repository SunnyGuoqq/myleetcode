x = int(input("x="))
res = 0
if x < 0:
    x = -x
    while (x != 0):
        temp = x % 10
        temp = -temp
        res = res*10 + temp
        x //= 10
    print(res)
else:
    while (x != 0):
        temp = x % 10
        res = res*10 + temp
        x //= 10
    print(res)
