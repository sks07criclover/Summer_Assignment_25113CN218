//WAP to find max and mix value of elements
#include<stdio.h>

int main()
{
    int n,arr[12];

    printf("Enter size of an array\n");
    scanf("%d",&n);
    printf("Enter the elements one by one : \n");
    for(int i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
    int max= arr[0];
    int min = arr[0];

    for(int i=0;i<n;i++)
    {
      if (arr[i]>max)
      max=arr[i];
      else if (arr[i]<min)
      min = arr[i];

    }
      printf("\n Highest and lowest value of elements is %d and %d respectively",max,min);
    return 0 ;
}
                                                             