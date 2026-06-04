//WAP TO GENERATE FIBONACCI SERIES
#include<stdio.h>
int main()
{
    int n1,n2,n,i ;
    printf("ENTER THE NUMBER OF TERMS \n");
    scanf("%d",&n);
    n1 = 0;
    n2 = 1;
   int  n3 = 1;
    
    printf("FIBONACCI SERIES IS :\n");
    for(i = 1 ; i <= n ; i++)
    {printf("%d \t",n1);
        
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    
    }



return 0 ;




}