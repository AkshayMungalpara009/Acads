#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char a[500];
    int i,l,b,f,u,y=0,c=-1,r=0,p=0;
    gets(a);
    l=strlen(a);



     do
     {
         if(r==0)
        {
             for(i=0 ; i<l ; i++)
          {
             if(a[i]==' ')
                {
                    f=i-1;
                    r=1;
                    break;
                }
          }
        }
            for(i=c+1 ; i<l ; i++)
           {
            if(a[i]==' ' || a[i]=='\n')
            {
             b=i+1;
             break;
            }
           }
        for(i=b ; i<=l ; i++)
          {
           if(a[i]==' ')
            {
            c=i-1;
            break;
            }
            else if(a[i]=='\0')
            {
                c=i-1;
                y=1;
                break;
            }
           }
        if(r==1 && p==0)
        {
            for(i=f;i>=0;i--)
            {
                printf("%c",a[i]);
            }
          p=1;
        }
        printf(" ");
        for(i=c ; i>=b ; i--)
          printf("%c",a[i]);
     }
      while(b<l && y!=1);
}

