//SUM of digits by recursion
#include<stdio.h>
int sum_digits(int);
int sum_digit(int n){
 if(n==0)
   return 0;

return n%10 + sum_digit(n/10);

}

int main ()
{
 int num;
 printf("Enter the number \n");
 scanf("%d",&num);
 int result = sum_digit(num);
 printf("Sum of digits of %d is %d",num,result);
 return 0;


}