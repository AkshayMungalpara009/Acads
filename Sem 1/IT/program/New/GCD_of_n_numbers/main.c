#include <stdio.h>
int main(void)
{
    int a[500],i,min,m,gcd,flag=0,j;
    printf("how many numbers GCD you want to find :");
    scanf("%d",&m);
    for(i=0 ; i<m ; i++)
    {
        printf("Eneter a %d number :",i+1);
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0 ; i<m ; i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    for(i=2 ; i<=min ; i++)
    {
        for(j=0 ; j<m ; j++)
        {
            if(a[j]%i==0)
            {
                if(j!=m-1)
                    continue;
                 else
                 {
                     gcd=i;
                     flag=1;
                 }
            }
            else
               break;
        }
    }
    if(flag==1)
        printf("GCD = %d",gcd);
    else
        printf("GCD = 1");
}
