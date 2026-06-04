//WAP TO PRINT ARMSTRONG NUMBER IN A GIVEN INTERVAL 
#include<stdio.h>
#include<math.h>
int main()
{
int n1,n2;
printf("ENTER THE LOWER LIMIT AND UPPER LIMIT RESPECTIVELY \n") ;
scanf("%d %d",&n1,&n2);
for(int i=n1;i<=n2;i++)
{
int count = 0;
double sum =0;
int i1 = i ;
while(i>0){
i = i/10;
count ++ ;

}

i = i1 ;
while(i>0){

int r = i%10;
sum = sum + pow(r,count);
i = i/10 ;

}
if(i1==sum)
printf("%d \t",i1);

}


return 0;




}