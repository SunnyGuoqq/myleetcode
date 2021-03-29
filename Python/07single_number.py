nums=input("nums=")
nums=nums.split(" ")
x=nums[0]
nums=[eval(i) for i in nums]
#用异或运算
for i in range(1,len(nums)):
        x=int(x)^int(nums[i])
print(x)



