//WAP TO WRITE FUNCTION OF addition of two fuction
#include<stdio.h>
int sum(int,int);
int sum(int x,int y)
{

printf("Addition of two numbers is %d",x + y);

return x + y;

}

int main()
{
    int num1, num2;
    printf("Enter two numbers :\n");
    scanf("%d%d",&num1,&num2);

    sum(num1,num2);

    return 0 ;
}
