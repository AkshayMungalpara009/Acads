#include <stdio.h>
int sum(int n)
{
    int j;
    if(n>=1)
     return n+sum(n-1);
}
int main(void)
{
   int n;
   printf("Enter the number of terms :");
   scanf("%d",&n);
   if(n>=1)
   printf("%d",sum(n));
   else
    printf("Enter proper number.");
}
