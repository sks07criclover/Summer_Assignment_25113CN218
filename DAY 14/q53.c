//WAP TO LINEAR SEARCH
#include<stdio.h>

int main(){

    int n;
    int a[10];
    printf("Enter the size of array: \n");
    scanf("%d",&n);
    printf("Enter the elements :\n");

    for(int i= 0;i<n;i++)
    {
       scanf("%d",&a[i]);

    }
  int data ;
  printf("Enter the data to be found:\n");
  scanf("%d",&data);
  
  int count =0;
  for(int i =0;i<n;i++)
{
    if(a[i]==data)
    {
      printf("Elements is found at index %d",i);
      count++;
      break;

    }


}
  if(count==0)
  printf("\nEntered data is not found in the array");
    return 0 ;
}
