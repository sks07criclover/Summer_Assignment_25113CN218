//WAP TO FIND SUM OF DIGITS OF A GIVEN NUMBER.
#include<stdio.h>
int main()
{
int n,sum;
printf("ENTER THE NUMBER \n");
scanf("%d", &n);
sum = 0;
while(n > 0)
{
sum = sum + n%10 ;
n = n /10 ;
}
printf("SUM OF DIGITS OF THE GIVEN NUMBER IS %d", sum);
}


