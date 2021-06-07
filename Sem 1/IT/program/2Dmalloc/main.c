#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int **p,i,j;
   p=(int**)calloc(5,sizeof(int*));
   for(i=0 ; i<5 ; i++)
        p[i]=(int*)malloc(3*sizeof(int));
    for(i=0 ; i<5 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            scanf("%d",&p[i][j]);
        }
        printf("\n");
    }
     for(i=0 ; i<5 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            printf("%d",p[j][i]);
        }
        printf("\n");
    }
}
