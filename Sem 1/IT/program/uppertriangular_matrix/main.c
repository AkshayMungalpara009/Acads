#include <stdio.h>
int main()
{
    int a[500][500],m,i,j,flag=0;
     printf("Enter the dimention of matrix :");
     scanf("%d",&m);
     for(i=0 ; i<m ; i++)
     {
         for(j=0 ; j<m ; j++)
         {
             printf("Enter the %d%d element of matrix a ",i+1,j+1);
             scanf("%d",&a[i][j]);
          }
     }
     for(i=1 ; i<=m ; i++)
     {
         for(j=0 ; j<i-1 ; j++)
         {
             if(a[i][j]!=0)
                flag=1;
         }
     }
     if(flag==0)
        printf("your matrix is upper triangular matrix.");
     else
        printf("your matrix is  not upper triangular matrix.");
}
