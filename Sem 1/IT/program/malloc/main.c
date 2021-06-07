#include <stdio.h>
int main(void)
{
    int *p,i,*q,sum=0;
    float avg;
    p=(int*)malloc(10*sizeof(int));
    q=p;
    printf("address of p is %u\n",p);
    for(i=0 ; i<10 ; i++)
        printf("Address of %d is %u\n",i+1,p[i]);
    p=q;
    printf("Enter 10 numbers :");
    for(i=0 ; i<10 ; i++)
        scanf("%d",&p[i]);
    p=q;
    for(i=0 ; i<10 ; i++)
        sum=sum+p[i];
    avg=sum/10;
    printf("Avg of 10 numbers is %0.3f\n",avg);
}
