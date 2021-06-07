#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the number :");
    scanf("%d",&a);
    while(1)
    {
        printf("Enter the number :");
        scanf("%d",&b);
        if(a<b)
            break;
        a=b;
    }
}
