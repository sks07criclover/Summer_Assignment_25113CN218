//WAP TO WRITE FUNCTION TO FIND ARMSTRONG
#include<stdio.h>
#include<math.h>
void arm(int);
void arm(int x)
{
    int count = 0;
    double sum = 0;
    double r;
    int x1 = x;
    while(x>0)
    { 
        x = x/10; 
        count ++;
    
    }
     
    x = x1;
    while(x>0)
    {
        r = x%10;
       sum = sum + pow(r,count);
       x = x/10;
    }
    if(x1==sum)
    printf("\n%d is Armstrong",x1);
    else
    printf("\n %d is not Armstrong",x1);
}
int main()
{
    int num1,num2;
    printf(" Enter the number : \n");
    scanf("%d%d",&num1,&num2);
    arm(num1);
    arm(num2);


    return 0 ;
}
