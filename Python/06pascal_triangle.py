num=int(input("num="))
lists=[]
#初始化嵌套列表
for i in range(num):
        lists.append([])
        for j in range(num):
                lists[i].append(0)
#输出
for i in range(num):
        for j in range(i):
                if i==j or j==0:
                        lists[i][j]=1
                        print(i)
                else:
                        lists[i][j]=lists[i-1][j-1]+lists[i-1][j]
print(lists)

