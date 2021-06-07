#include <stdio.h>
int main()
{
    int i,j,sum;
   for(j=2 ; j<1000 ; j++)
    {
        sum=0;
    for(i=j-1 ; i>=1 ; i--)
    {
        if(j%i==0)
         sum=sum+i;
    }
   if(sum==j)
    printf("%d\n",j);
    }
}
