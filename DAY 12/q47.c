//WAP TO WRITE FUNCTION FOR Fibonacci
#include<stdio.h>
int fibonacci(int);
int fibonacci(int x)
{
 if(x==0 || x ==1)
 return x;

 else
 return fibonacci(x -2) + fibonacci(x - 1);



}



int main()
{
 int n;
 printf("Enter the nth term \n" );
 scanf("%d",&n);
 printf("Fibonacci series upto %dth term is : \n",n);

 for(int i = 0;i<n;i++)
 {

    printf("%d\t",fibonacci(i));
 }


    return 0 ;
}
