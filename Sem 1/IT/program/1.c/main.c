#include <stdio.h>
#include <stdlib.h>


int main()
{
    unsigned int l,b,area;
    printf("Enter length and width :");
    scanf("%d%d",&l,&b);
    area=l*b;
    int *a,*k,*c;
    a=&l;
    k=&b;
    c=&area;
    printf("%d\n",area);
    printf("address of %d is %p and %d is %d and %d is %d",l,a,b,k,area,c);


}


