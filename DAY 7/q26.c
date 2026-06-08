//wap to write recursive fibonacci
#include<stdio.h>
int fibonacci(int);
int fibonacci(int n){
 if(n==0 || n ==1 )
 {
   return n; 
 }
 return fibonacci(n -1) + fibonacci(n-2);

 }
 int main(){
    int index;
    printf("Enter the term \n");
    scanf("%d",&index);

    for(int i=0;i<=index;i++){

    printf("%d \t",fibonacci(i));


    }



  return 0;

 }