#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **p,i,j,k,m,n;
    printf("Enter the raws and cols :");
    scanf("%d %d",&n,&m);
    p=(int**)calloc(n,sizeof(int*));
    for(i=0 ; i<n ; i++)
    {
        p[i]=(int*)malloc(m*sizeof(int));
    }
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<m ; j++)
        {
            scanf("%d",&p[i][j]);
        }
    }
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<m ; j++)
        {
            printf("%d",p[i][j]);
        }
        printf("\n");
    }
}
