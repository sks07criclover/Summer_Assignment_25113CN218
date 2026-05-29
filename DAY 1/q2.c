// multiplication table of a number
#include<stdio.h>
int main()
{
int i,n;
printf("Enter a number \n");
scanf("%d",&n);
printf("\n       MULTIPLICATION TABLE OF GIVEN NUMBER IS : \n");
for(i=1;i<=10;i++)
{
printf("%d X %d = %d \n",n,i,n*i) ;



}




return 0 ;


}