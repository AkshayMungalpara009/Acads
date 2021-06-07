#include <stdio.h>
#include <stdlib.h>

int main()
{
   char a[4];
   int b[4],c[4],e[4],l=0,d,max,i,,flag=0,j,k;
   static int n=0,m=0,v=0;
   while(l<4)
  {

     for(i=n ; i<4 ; i++)
   {
       printf("Enter batsman name :");
       scanf("%s",&a[i]);
       n=n+1;
       break;
   }

   for(j=m ; j<4 ; j++)
   {
       printf("Enter runs :");
       scanf("%d",&b[j]);
       m=m+1;
       break;
   }

   for(k=v ; k<4 ; k++)
   {
       printf("Enter balls :");
       scanf("%d",&c[k]);
       v=v+1;
       break;
   }
   printf("\n\n");
  l=l+1;
  }
k=0;
  for(j=0 ; j<3 ; j++)
  {

  for(i=0 ; i<3 ; i++)
  {
      flag=0;
      if(b[i]<b[i+1])
      {
          d=b[i];
          b[i]=b[i+1];
          b[i+1]=d;
          flag=1;
      }
      if(flag==1)
      {
          e[k]=i+1;

      }
  }
  if(b[j]>b[j+1] && b[j+1>b[j+2] ; ])
    printf("%c %d %d \n",a[i],b[i],c[i]);
  }

}
