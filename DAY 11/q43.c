//WAP TO WRITE FUNCTION TO CHECK PRIME OR NOT
#include<stdio.h>
void prime(int);
void prime(int x)
{
 int count =0;
 for(int i = 2;i<=x/2;i++)
 {
  if(x%i == 0)
  {

    count ++ ;
  }

 }
 if(count==0)
printf(" \n %d is prime ",x);
else 
printf(" \n %d is non prime ",x);
}

int main()
{
    int n1,n2;
    printf("Enter numbers that are need to be checked \n");
    scanf("%d%d",&n1,&n2);
    prime(n1);
    prime(n2);
    return 0 ;
}
