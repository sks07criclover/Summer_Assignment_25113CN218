//WAP TO REVRSE A NUMBER.
 #include<stdio.h>
 int main()
 {
   int n, rev ;
   printf("ENTER THE NUMBER \n");
scanf("%d",&n);
rev = 0;
while(n>0)
{
rev =rev *10 + n%10 ;
n = n/10 ;

}

printf("\n REVERSED NUMBER IS %d",rev);
return 0 ;




 }