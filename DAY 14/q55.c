//Write a program to Second largest element
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

    int largest = a[0];
    int second_largest=a[0];

    for(int i =0;i<n;i++)
    {
      if(a[i]>largest)
      second_largest=largest;
      largest=a[i];

    }
       

    for(int i =0;i<n;i++)
    {
          if(a[i]>second_largest&& a[i]<largest)
          second_largest = a[i];

    }

     printf("Second largest element an array is %d",second_largest);



    return 0 ;
}
