 //WAP TO CONVERT BINARY TO DECIMAL
 #include<stdio.h>
 #include<math.h>
 void main()
  {
   int n; 
   printf("Enter the bits of binary \n ");
   scanf("%d",&n);

   int a[n];
   printf("Enter binary digits \n");
   for(int i =n -1;i>=0;i--)
   {
      scanf("%d",&a[i]);
   }
   int sum = 0;
   for(int j=0 ;j<=n - 1;j++)
   {
     sum = sum + pow(2,j)*a[j];

   }


   printf("Decimal conversion is %d",sum);
   
  }



