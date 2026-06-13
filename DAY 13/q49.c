//WAP TO INPUT AND DISPLAY ARRAY
#include<stdio.h>

int main()
{
 int a[10];
 int n;
 printf("Enter the size of an array : \n");
 scanf("%d",&n);
 printf("Input all elemnets of array : \n");

 for(int i =0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("Elements of array are : \n");

 for(int j=0 ; j<n;j++ )
 {

    printf("%d \t",a[j]);
 }
    return 0 ;
}
