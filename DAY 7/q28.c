//WAP for recursive reverse number
#include<stdio.h>
int rev_num(int) ;
int rev_num(int x)
// DOUBT IN THIS QUESTION
{
 if(x == 0)
  return  1;
   
 return 10*(x%10) + rev_num(x/10);

}

int main()
{
 int num;
 printf("Enter the number \n");
 scanf("%d",&num);
  int result = rev_num(num);
  printf("Reverse of %d is %d",num,result);

 return 0;

}
