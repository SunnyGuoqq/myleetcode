nums=input("nums[]=")
target=int(input("target="))
nums=nums.split(" ")
nums=[eval(i) for i in nums]
nums.sort()
left=0
right=len(nums)-1

#当target比列表中所有元素都大时
if nums[len(nums)-1] < target:
        nums.append(target)
        print(len(nums)-1)
        print(nums)
else:
        while left < right:#二分法查找
                mid=(left+right)//2
                if nums[mid] < target:
                        left=mid+1
                        nums.insert(left,target)
                        print(left)
                        print(nums)
                elif nums[mid] == target:
                        nums.insert(mid,target)
                        print(mid)
                        print(nums)
                elif nums[mid] == target:
                        right=mid-1
                        nums.insert(left+1,target)
                        print(left+1)
                        print(nums)
                elif nums[left] == target:
                        nums.insert(left,target)
                        print(left)
                        print(nums)
                        break
                elif nums[right] == target:
                        nums.insert(right,target)
                        print(right)
                        print(nums)
                        break
        
        
        

