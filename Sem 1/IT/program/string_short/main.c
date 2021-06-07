#include <stdio.h>
#include<string.h>
int main()
{
    char a[500];
    int b[500],i,l,j,e;
    gets(a);
    l=strlen(a);
    for(i=0 ; i<l ; i++)
         b[i]=a[i];
    for(j=0 ; j<=100 ; j++)
    {
        for(i=0 ; i<l ; i++)
      {
        if(b[i]>b[i+1])
        {
            e=b[i];
            b[i]=b[i+1];
            b[i+1]=e;
        }
      }
    }
     for(i=0 ; i<l ; i++)
        a[i]=b[i];
     puts(a);
}
