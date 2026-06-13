//WAP TO FIND SUM AND AVERAGE OF AN ARRAY
#include<stdio.h>
int main()
{
    int a[100];
    int n;
    int sum = 0;
    float avg;
    printf("Enter the size of an array \n");
    scanf("%d",&n);
    printf("Enters elements of an array \n");
    for(int i =0;i<n;i++)
    {
      scanf("%d",&a[i]);
      sum = sum + a[i];
    }
     avg = (float)sum/n ;
     
     printf("SUM IS %d \n",sum);
     printf("Average of %d elements is %.2f",n,avg);
    return 0 ;
}
