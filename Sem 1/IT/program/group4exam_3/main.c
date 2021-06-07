#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
   char a[500];
   int i,j,l,count,max=0,p,b[500];
   printf("Enter a string :");
   gets(a);
   l=strlen(a);
   for(i=0 ;i<l ; i++)
   {
       count=0;
       for(j=0 ; j<l ; j++)
       {
           if(a[i]==a[j])
            count=count+1;
       }
       b[i]=count;
       if(count>max)
       {
           max=count;
           p=a[i];
       }
   }
   for(i=0 ; i<l ; i++)
   {
           printf("frequance of %c is %d.\n",a[i],b[i]);
   }


   printf("%d %c\n",max,p);
   for(i=0 ; i<max ; i++)
        printf("%c",p);
   for(i=0 ; i<l ;i++)
   {
       if(a[i]!=p)
            printf("%c",a[i]);
   }
}
