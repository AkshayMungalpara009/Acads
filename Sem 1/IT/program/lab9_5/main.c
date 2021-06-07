#include <stdio.h>
void reverse(int n)
{
   if(n!=0)
   {
       printf("%d",n%10);
       n=n/10;
       reverse(n);
   }
}
int main(void)
{
    int n,sum;
    printf("Enter a number :");
    scanf("%d",&n);
    reverse(n);
}
