#include <stdio.h>
#include<string.h>
int main()
{
    char a[500];b[10];
    int i,l;//len;
    gets(a);
    l=strlen(a);
    //printf("Enter the word which you want to remove :");
    //gets(b);
    //len=strlen(b);

    for(i=0 ; i<l ; i++)
    {
        if((a[i]=='t' || a[i]=='T') && (a[i+1]=='h' || a[i+1]=='H') && (a[i+2]=='e' || a[i+2]=='E') && a[i+3]==' ')
            a[i]=0;
    }
    for(i=0 ; i<l ; i++)
    {
        if(a[i]!=0)
            printf("%c",a[i]);
        else
            i=i+2;
    }
    return 0;
}
