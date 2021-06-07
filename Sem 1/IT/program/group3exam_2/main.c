#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int fact(int i)
{
    int k=1,j;
    for(j=1 ; j<=i ; j++)
        k=k*j;
    return k;
}
int main()
{
    int i,j,m,n,p=0;
    float sum=0;
    printf("Enter the value of n : ");
    scanf("%d",&m);
    printf("Enetr the value of x :");
    scanf("%d",&n);
    for(i=1 ; i<=m ; i++ )
    {
        if(i%2!=0)
        {
          sum=sum+pow(-1,p)*pow(n,i)/fact(i);
          p=p+1;
        }

    }
    printf("%f",sum);

}
