#include <stdio.h>
#include<string.h>
int main(void)
{
    char a[500];
    int i,count=0;
    gets(a);
    for(i=0 ; i<'\n' ; i++)
    {
        if(a[i]==' ' && a[i+1]!=' ')
            count=count+1;
    }
    printf("number of words are %d.",count+1);
}
