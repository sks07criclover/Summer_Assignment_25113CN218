 //WAP TO CONVERT DECIMAL TO BINARY
 #include<stdio.h>
 int main()
 {
 int n;
 int r;
 int a[10];
 int i = 0;
   printf("Enter the number \n");
   scanf("%d",&n);
   printf("Binary expansion of the given number is :\n");

 while(n>0){

    r = n%2;
    n = n/2;
    a[i] = r;
    i++;

  }

  for(int j = i-1 ; j >=0;j--)
 {
    printf("%d \t",a[j]);

  }



 return 0;


 }