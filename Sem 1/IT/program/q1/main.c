#include <stdio.h>
int main(void)
{
   int a[10],i,j,sum,temp,temp1,min=99999;
   for(i=0 ; i<10 ; i++)
   {
       printf("Enter %d number :",i+1);
       scanf("%d",&a[i]);
   }
   for(i=0 ; i<10 ; i++)
   {
       for(j=i+1 ; j<10 ; j++)
       {
            sum=a[i]+a[j];
            if(sum<0)
                sum=sum*(-1);
            if(sum<min)
            {
                min=sum;
                temp=a[i];
                temp1=a[j];
            }
       }
   }
   printf("%d %d",temp,temp1);
}
