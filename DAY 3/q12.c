//WAP TO FIND LCM OF TWO NUMBERS
#include<stdio.h>
int main()
{
int n1,n2,i,lcm;
printf("ENTER TWO NUMBERS \n");
scanf("%d %d",&n1,&n2);
for(i= 1 ; i<=n1*n2 ; i++)
{
if (i % n1 ==0 && i %n2 ==0)
{
    lcm = i ; 
    break ;
}




}


printf("LCM OF TWO NUMBERS IS %d",lcm);
return 0;




}