#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char a[500],p[500];
    int i,j,k=0,l,count,d,b,flag=0;
    gets(a);
    l=strlen(a);
    j=l;
    b=l+1;
    while(a[j]!=a[0])
    {
        count=0;
    for(i=b-1 ; i>=0 ; i--)
    {
        if(a[i]==' ')
        {
            d=i-1;
            break;
        }
        else
            count=count+1;
    }
    for(i=d ; i>=0 ; i--)
    {
        if(a[i]==' ')
           {
               b=i+1;
               break;
           }
           else
            count=count+1;
    }
    //printf(" ");
    for(i=b ; i<=d ; i++)
    {
        printf("%c",a[i]);
        p[k]=a[i];
        k=k+1;
    }
        j=j-count;
    }
    printf("6");
    k=0;
    for(i=l ; i>=0 ; i--)
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
