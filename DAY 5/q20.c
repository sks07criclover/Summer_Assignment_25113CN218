//WAP TO FIND LARGEST PRIME FACTOR 
#include<stdio.h>
int main(){
int n,i,j,count;
printf("ENTER THE NUMBER : \n");
scanf("%d",&n);
printf("Largest prime factor of %d is : \n",n);
for(i=n;i>=1;i--)
{
if(n%i==0)
{
    count= 0;
for(j=2;j<=i/2;j++){

if(i%j==0)
count ++;


}
if(count==0){
printf("%d",i);
break;}

}




}




return 0;



}