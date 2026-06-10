//WAP TO PRINT CHARACTER PYRAMID
#include<stdio.h>

int main()
{
   int n;
   printf("Enter the number:\n");
   scanf("%d",&n);
    for(int i = 1;i<n;i++)
     {
        for(int j=0;j<i+1;j++)
        {
            printf("%c",'A' + j);

        }

         for(int k = i -1;k>=1;k--)
         {
            printf("%c",'A' + k);

         }

         printf("\n");

     }



    return 0 ;
}
