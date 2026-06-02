//WAP TO FIND PRODUCT OF DIGITS OF A NUMBER
#include<stdio.h>
int main()
{
 int n , product ;
 printf("ENTER THE NUMBER \n");
    scanf("%d",&n);
    product = 1 ;
    while (n > 0)
    {
        int s = n %10 ;
        product = product *s ;
        n = n/10 ;
    }



printf("PRODUCT OF DIGITS OF THE NUMBER IS %d" , product);
return 0 ;



}