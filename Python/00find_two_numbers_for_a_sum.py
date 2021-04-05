num=input('输入数字：')
targets=input('target=')
target=int(targets)

numlist=num.split(" ")
numlist=[int(numlist[i]) for i in range(len(numlist))]

for i in range(0,len(numlist)):
    for j in range(i+1,len(numlist)):
        if target==numlist[i]+numlist[j]:
            print(i,j)

