//WAP TO PRINT HALF PYRAMID PATTERN
#include<stdio.h>
int main()
{
 int i,j,n;
 printf("ENTER THE NUMBER  : \n ");
 scanf("%d",&n);
  
  for(i=n;i>=0;i--)
   {
      for(j =0;j<=i; j++)
      {
        printf("*");
      }
      printf("\n");
   }





    return 0;
}