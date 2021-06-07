#include <stdio.h>
#include<stdlib.h>
int main()
{
    int a[500],i,count=0;
    for(i=0 ; a<500 ; i++)
    {
        scanf("%d",&a[i]);
        count=count+1;
        if(a[i]==0)
            break;
    }
    for(i=0 ; i<count ; i++)
    {
        if(a[i]%3==0)
            printf("%d is divisible by 3\n",a[i]);
    }
    for(i=0 ; i<count ; i++)
    {
        if(a[i]%5==0)
            printf("%d is divisible by 5\n",a[i]);
    }
    for(i=0 ; i<count ; i++)
    {
        if(a[i]%7==0)
            printf("%d is divisible by 7\n",a[i]);
    }
}
