#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char a[500],p[500];
    int i,j,k=0,l,d,b,flag=0;
    gets(a);
    l=strlen(a);
    j=l;
    b=l+1;
    while(a[b-1]!='$')
    {
    for(i=b-1 ; i>=0 ; i--)
    {
        if(a[i]==' '||a[i]=='$')
        {
            d=i-1;
            break;
        }
    }
    for(i=d ; i>=0 ; i--)
    {
        if(a[i]==' ' || a[i]=='$')
           {
               b=i+1;
               break;
           }
    }
   // printf(" ");
    for(i=b ; i<=d ; i++)
    {
     //   printf("%c",a[i]);
        p[k]=a[i];
        k=k+1;
    }
      p[k]=' ';
      k=k+1;
    }
   // printf("\n");
    k=0;
    for(i=1 ; i<l-1 ; i++)
    {
        if(a[i]!=p[k])
        {
            flag=1;
            k=k+1;
        }
        else
            k=k+1;
    }
        if(flag==0)
        printf("string is pelindrom");
        else
        printf("string is not pelindrom");
}


