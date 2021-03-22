res=[]
a=input()
item=a.split(" ")
nums=[eval(i) for i in item]
nums.sort()

for i in range(len(nums)):
    if nums[i]>0:
        break
    if(i>=1 and nums[i]==nums[i-1]):
        continue
    target=-nums[i]
    j=i+1
    k=len(nums)-1
    while j<k:
        if nums[j]+nums[k]==-nums[i]:
            res.append(nums[i])
            res.append(nums[j])
            res.append(nums[k])
            while j<k and nums[j]==nums[j+1]:
                j+=1
            while j<k and nums[k]==nums[k-1]:
                k-=1
            j+=1
            k-=1
        elif nums[j]+nums[k]<-nums[i]:
            j+=1
        else:
            k-=1

print([res[i] for i in range(len(res))])

