//WAP TO COUNT DIGIT OF A NUMBER
#include<stdio.h>
int main()
{
int count ,n;
printf("ENTER THE NUMBER \n");
scanf("%d ",&n);
count = 0;
while(n>0){

n = n/10;

count ++ ;

}


printf("Number of digits of the given number is %d",count);

return 0;

}