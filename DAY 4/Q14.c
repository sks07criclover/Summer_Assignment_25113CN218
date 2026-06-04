//find nth term of fibonacci series
#include<stdio.h>
#include<math.h>
int main()
{
    int n1=0,n2=1,n3,i,n;
    printf("ENTER THE TERM YOU WANT TO FIND \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
    }
    printf("THE %dth TERM OF FIBONACCI SERIES IS %d",n,n1);
    return 0;
}