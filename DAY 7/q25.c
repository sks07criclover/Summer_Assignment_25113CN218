//WAP TO FIND RECURSIVE FACTORIAL
#include<stdio.h>

int factorial(int);

int factorial(int n){
    if(n==1 || n ==0)
    { 
        return 1;
    }

       return factorial(n - 1)*n;

       }

       int main(){ 
        int num;
        printf("Enter the number : \n");
        scanf("%d",&num);

        int result = factorial(num);
        printf("Factorial of %d is %d",num,result);
        

        return 0;



       }