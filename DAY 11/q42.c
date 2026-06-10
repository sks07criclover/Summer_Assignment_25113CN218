//WAP TO WRITE FUNCTION TO find maximum
#include<stdio.h>
int max(int,int,int);
int max(int x,int y,int z )
{

if(x>y)
{
 if(x>z)
 return x;
 else 
 return z;

}
else
{
    if(y>z)
    return y;
    else 
    return z;
}


}

int main()
{
    int num1,num2,num3;
    printf("Enter three numbers : \n");
    scanf("%d%d%d",&num1,&num2,&num3);

    int result = max(num1,num2,num3);
    printf("\n MAXIMUM AMONG ENTERED THREE VALUES IS :\n %d",result);
    

    return 0 ;
}
