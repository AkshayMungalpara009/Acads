#include <stdio.h>
#include <stdlib.h>

int main()
{
   int m,i,j,n;
   printf("Enter the number of person :");
   scanf("%d",&n);
   struct bank
   {
       char a[500];
       int no,balance;
   } b[n];
   for(i=0 ; i<n ; i++)
   {
        printf("name : ");
       scanf(" %[^\n]",b[i].a);
       printf("account number : ");
       scanf("%d",&b[i].no);
       printf("Balance :");
       scanf("%d\n",&b[i].balance);
   }
   for(i=0 ; i<n ; i++)
   {
        if(b[i].balance<100)
         printf("%s %d",b[i].a,b[i].no);
   }
}
