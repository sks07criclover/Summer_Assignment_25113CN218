//WAP TO WRITE FUNCTION to find factorial
#include<stdio.h>
int fact(int);

int fact(int x)
{
if(x==1 || x == 0)
return 1;
else 
return fact(x-1)*x ;


}

int main()
{
    int n1;
    printf("Enter the number :\n");
    scanf("%d",&n1);

    int result = fact(n1);
    printf("\n Factorial of %d is : %d",n1,result);
    return 0 ;
}
