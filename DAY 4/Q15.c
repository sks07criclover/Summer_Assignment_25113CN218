//WAP TO CHECK ARMSTRONG NUMBER
#include<stdio.h>
#include<math.h>
int main()
{
    int n,n1,count = 0 ,r;
    double sum = 0;
    printf("ENTER THE NUMBER \n");
    scanf("%d",&n);
    n1 = n ;
    while(n>0)
    {
 n = n/10; 
 count++;

    }
    n = n1;
    while(n>0)
    {
 r = n %10;
 sum = sum + pow(r,count);
 n = n/10 ;

    }

    if (sum == n1)
    
        printf("ENTERED NUMBER IS AN ARMSTRONG NUMBER");
        else
        printf("ENTERED NUMBER IS NOT AN ARMSTRONG NUMBER");
    return 0;

    
}