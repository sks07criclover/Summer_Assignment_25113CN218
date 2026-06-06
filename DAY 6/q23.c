//WAP TO COUNT SET BITS IN A NUMBER
  #include<stdio.h>
  int main()
  { 
    int n , count = 0;
     
     printf("Enter the number \n");
     scanf("%d",&n);

    while(n>0)
     {  //As we have to count number of 1's in binary representation
       if(n%2==1)
        {
            count++;
        }
        n = n/2;
     }
 
     printf("Number of set bits in the number is %d",count);
    


    return 0;
  }