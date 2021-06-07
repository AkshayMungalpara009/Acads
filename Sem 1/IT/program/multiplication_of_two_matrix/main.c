#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3],b[3][3],result[3][3];
    int i,j,k,s;
    printf("for first matrix \n");
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            printf("Enter a element of %d %d ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("for second matrix \n");
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            printf("Enter a element of %d %d ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0 ; i<3 ; i++ )
    {
        for(j=0 ; j<3 ; j++)
        {
            result[i][j]=0;
        }
    }
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            for(k=0 ; k<3 ; k++)
            {
                s=(a[i][k]*b[k][j]);
               result[i][j]=result[i][j]+s;
            }
        }
    }
    printf("for resultant matrix \n");
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
