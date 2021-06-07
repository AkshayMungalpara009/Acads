#include <stdio.h>
#include <stdlib.h>

int main()
{
       int a[10],i,j,H=9,L=0,M,no;
   for(i=0 ; i<10 ; i++)
     {
       printf("Enter a %d number :",i+1);
       scanf("%d",&a[i]);
     }

     printf("Enter a number which you want to found :");
     scanf("%d",&no);

     while(1)
     {
        M=L-(H+L)/2;
       if(a[M]==no)
          {
               printf("%d is found at %d",a[M],M);
               break;
          }
       else if(a[M]<no)
          L=M+1;

       else
          H=M-1;
     }

}
