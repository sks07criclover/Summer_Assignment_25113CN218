// Sum of first n natural numbers
#include<stdio.h>
int main()
{
int i,Sum,n ;
Sum =  0 ;
printf("Enter the Value of n \n") ;
scanf("%d",&n);
for(i=0;i<=n;i++)
{

    Sum = Sum + i ;



}

printf("\n THE SUM OF FIRST N NATURAL NUMBERS IS : %d",Sum);
return 0 ;

}