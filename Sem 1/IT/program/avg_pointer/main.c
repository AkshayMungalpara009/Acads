#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5],i,sum=0,*p;
    float avg;
    printf("Enter a five number :");
    for(i=0 ; i<5 ; i++)
    {
        scanf("%d",&a[i]);
    }
    p=&a[0];
    for(i=0 ; i<5 ; i++)
    {
        sum=sum+*p;
        p++;
    }
    avg=sum/5;
    printf("%f",avg);
}
