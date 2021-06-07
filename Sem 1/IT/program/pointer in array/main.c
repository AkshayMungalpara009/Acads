#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int *p,m,n,i,j;
    printf("Enter the number of rows and columns :");
    scanf("%d %d",&m,&n);
    p=(int*)malloc(m*n*sizeof(int));
    printf("Enter matrix elements :");
    for(i=0 ; i<m ; i++)
    {
        for(j=0 ; j<n ; j++)
            scanf("%d",p[i][j]);
    }
    for(i=0 ; i<m ; i++)
    {
        for(j=0 ; j<n ; j++)
            printf("%d",*p[i][j]));
            printf("\n");
    }
}
