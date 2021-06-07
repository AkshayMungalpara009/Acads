#include<string.h>
#include <stdio.h>
int main()
{
    char a[500];
    int i,l,j,b[500];
    printf("Enetr the string  :");
    gets(a);
    l=strlen(a);
    for(i=0 ; i<l ;i++)
        b[i]=a[i];
    for(i=0 ; i<l  ; i++)
    {
        if(b[i]>=65 && b[i]<=90)
            b[i]=b[i]+32;
    }
    for(i=0 ; i<l ; i++)
        a[i]=b[i];
    puts(a);
}
