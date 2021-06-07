#include <stdio.h>
int main()
{
    int i,j,c;
   struct batsman{
       char a[50];
       int run;
       int ball;
   }b[4],l;

   for(i=0 ; i<4 ; i++)
   {
       scanf("%s",&b[i].a);
       scanf("%d",&b[i].run);
       scanf("%d",&b[i].ball);
       printf("\n");
   }
   for(j=0 ; j<5 ; j++)
   {
       for(i=0 ; i<3 ; i++)
        {
            if(b[i].run<b[i+1].run)
            {
                l=b[i];
               b[i]=b[i+1];
               b[i+1]=l;
            }
        }
   }
   for(i=0 ; i<4;i++ )
   {
       printf("%s %d %d",b[i].a,b[i].run,b[i].ball);
       printf("\n");
   }
}
