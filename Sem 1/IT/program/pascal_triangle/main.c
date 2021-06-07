#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int fac( int g )
{
    int k=1,i;
    if(g==0)
        return 1;
    else
    {
        for(i=g ; i>=1 ; i--)
        {
         k=k*i;
        }
        return k;
    }
}
int main(void)
{
    int i,j,no,d,p,a;
    printf("Enter a number of raw : ");
    scanf("%d",&no);
 for(i=1 ; i<=no ; i++)
        printf(" ");
 printf("1 \n");
     for(i=1 ; i<=no ; i++)
     {
         for(p=1 ; p<=no-i ; p++)
         {
            printf(" ");
         }
         for(j=0 ; j<=i ; j++)
         {
            a=fac(i-j)*fac(j);
            d=fac(i)/a;
            printf("%d ",d);
         }
        printf("\n");
     }
        return 0;
}
