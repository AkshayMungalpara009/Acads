#include<stdio.h>
int feb(int n)
{
    int k;

    if(n<2)
        return n;
    else
        return feb(n-1)+feb(n-2);
}
int main(void)
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    printf("%d",feb(n));
}
