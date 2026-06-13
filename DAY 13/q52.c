//WAP TO FIND ODD AND EVEN ELEMENTS
#include<stdio.h>

int main(){
 int arr[10];
 int n;
 printf("Enter size of an array : \n");
 scanf("%d",&n);
printf("Enter elements of an array : \n");
 for(int i =0;i<n;i++)
 {
  scanf("%d",&arr[i]);

 }

 printf("\nEven elements are : \n");
 for(int i =0;i<n;i++)
 {
   if(arr[i]%2==0)
   printf("%d\t",arr[i]);

 }
 printf("\n Odd elements are : \n");
 for(int i =0;i<n;i++)
 {
  if (arr[i]%2 != 0)
  printf("%d \t",arr[i]);

 }
    return 0 ;
}
