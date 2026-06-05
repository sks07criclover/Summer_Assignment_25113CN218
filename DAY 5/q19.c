//WAP TO PRINT FACTORS OF A GIVEN NUMBER
#include<stdio.h>
int main()
{
int n;
printf("ENTER THE NUMBER \n");
scanf("%d",&n);
printf("FACTORS of %d is : \n",n);
for(int i=1;i<=n;i++){

if(n%i==0)
printf("%d \t",i);



}



return 0;




}