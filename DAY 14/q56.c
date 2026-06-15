//Write a program to Find duplicates in an array
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

    printf("Duplicate elements are :\n");
    int found =0;
    for(int i=0;i<n;i++)
    {
      for(int j=i+1;j<n;j++)
      {
        if (a[j]==a[i])
        {
            printf("%d\t",a[i]);
         found=1;
         break;

        }}}

        if(found==0)
        printf("not found");
        


      

    

    return 0;}
