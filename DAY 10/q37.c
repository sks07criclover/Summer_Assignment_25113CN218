//wap to print star pyramid
#include<stdio.h>

int main()
{  int n;
    printf("Enter the number of rows : \n");
    scanf("%d",&n);

    for(int i =0;i<n;i++)
     {
       for(int j = 1;j<=2*i +1;j++)
       {

        printf("*",j);

       }


       printf("\n");

     }

 




    return 0 ;
}
