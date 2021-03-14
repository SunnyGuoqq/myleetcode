#include <stdio.h>

int main()
{
int nums[100];
int target;
int length;
printf("target=");
scanf("%d", &target);
printf("length of nums:");
scanf("%d", &length);
printf("nums[]=");
for(int i=0; i<=length; i++){
scanf("%d", &nums[i]);
 }

for(int i = 0; i < length; i++){
   for(int j = i; j < length-i; j++){
     if(nums[i] == target-nums[j]){
     printf("[%d,%d]",i, j);
     }
   }
 }
return 0;
}
