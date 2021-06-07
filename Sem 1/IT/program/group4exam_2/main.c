#include <stdio.h>
#include<math.h>
int main()
{
    int i,m,n;
    float j,sum=0;
    printf("Enter the number of term :");
    scanf("%d",&n);
    printf("Enter the value of x :");
    scanf("%d",&m);
    for(i=1 ; i<=n ; i++)
    {
        j=pow(m,i)/i;
        sum=sum+pow(-1,i+1)*j;
    }
    printf("The series sum is %0.3f.",sum);
}
