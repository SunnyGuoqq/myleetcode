a = input("nums[]=")
val = int(input("val="))
item = a.split(" ")
del_list=[]
flag=0
nums = [eval(i) for i in item]
nums.sort()

for i in range(len(nums)):#删除nums中与val相同的数
    if nums[i] == val:
        del_list.append(nums[i])
flag=len(del_list)
for del_num in del_list:
    nums.remove(del_num)
    
print("nums=",nums)
print("与val相同的元素有几个？",flag)

