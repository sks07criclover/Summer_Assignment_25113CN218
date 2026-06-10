//WAP TO PTINT REVERSE STAR PYRAMID
#include<stdio.h>

int main()
{
 int n;
 printf("Enter theb number of rows : \n");
 scanf("%d",&n);

  for(int i=n-1;i>=0;i--)
  {
    for(int j = 1;j<=2*i + 1;j++)
    {
        printf("*");

    }

      printf("\n");
  }




    return 0 ;
}
