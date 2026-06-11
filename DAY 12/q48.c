//WAP TO WRITE FUNCTION TO CHECK PERFECT NUMBER
#include<stdio.h>
int perfect(int);
int perfect(int x)
{
 int x1 = x;
 int sum =0;

  for(int i = 1;i<=x/2;i++)
  {
    if(x%i==0)
    {

        sum = sum + i;
    }


  }
 if(x1==sum)
 return 1;
 else 
 return 0;
}
int main()
{
    int n ;
    printf("Enter the number : \n");
    scanf("%d",&n);
    if (perfect(n))
    printf("\n %d is a perfect number",n);
    else
    printf("\n %d is not a perfect number",n); 
    return 0 ;
}

