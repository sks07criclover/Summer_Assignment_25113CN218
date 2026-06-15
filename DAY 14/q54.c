//WAP TO FIND Frequency of an element in an array
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
  printf("Enter the data whose frequency need to be found:\n");
  scanf("%d",&data);
  
  int count =0;
  for(int i =0;i<n;i++)
{
    if(a[i]==data)
    {
      
      count++;
      

    }


}
  printf("\n Frequency of the entered data is %d",count);
    return 0 ;
}
