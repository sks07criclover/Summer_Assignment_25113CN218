//  WAP To print PRIME NUMBER IN A GIVEN RANGE
#include<stdio.h>
int main()
{
int n1,n2,i,j,count;
count = 0 ;
printf ("ENTER LOWER LIMIT AND UPPER LIMIT RESPECTIVELY : \n");
scanf("%d %d",&n1,&n2);
printf("PRIME NUMBERS IN THE GIVEN RANGE ARE : \n ");


for (i = n1 ; i <= n2 ; i++)
{
count = 0;
for (j = 2 ; j <= i/2 ; j++)
{
if (i % j ==0)
{
    count ++;
    break ;
} }
if (count ==0)

    printf("%d \t",i);
}


return 0 ;}