//WAP TO WRITE FUNCTION to write pallindrome
#include<stdio.h>
int paillindrome(int);
int pallindrome(int x)
{
 int x1 = x;
 int sum = 0;
 while(x>0)
 {
   int r = x%10;
   sum = 10*sum + r;
   x = x/10;


 }

 if (x1==sum)
 return 1;
 else
 return 0;
}

int main()
{
    int n1;
    printf("Enter the number : \n");
    scanf("%d",&n1);
    if (pallindrome(n1))
    printf("\n Entered number is a pallindrome");
    else 
    printf("\n Entered number is not a pallindrome");
    return 0 ;
}
