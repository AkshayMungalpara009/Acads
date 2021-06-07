#include <stdio.h>
#include<math.h>
int main()
{
    int i,n,sum=0,m,k;
    printf("Enter value of n : ");
    scanf("%d",&n);
    printf("Enter the value : ");
    scanf("%d",&m);
    for(i=2 ; i<=n ; i++)
    {
        k=pow(-1,i-1)*pow(m,i-1)/i-1;
        sum=sum+k;
    }
    printf("%d",sum+1);
}
