// WAP TO CHECK WHETHER A NUMBER IS PALINDROME OR NOT .
#include<stdio.h>
int main()
{
 int n , rev ,n1 ;
 printf("ENTER THE NUMBER \n");
    scanf("%d",&n);
    n1 = n ;
    rev = 0 ;
    while (n >0)
    {
         rev = rev *10 + n % 10 ;
         n = n/10 ;

}

if (n1 == rev)
{
    printf("THE NUMBER IS A PALINDROME \n");
}
else
{
    printf("THE NUMBER IS NOT A PALINDROME \n");
}

return 0 ;



}