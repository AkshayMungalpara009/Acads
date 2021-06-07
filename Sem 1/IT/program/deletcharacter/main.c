#include <stdio.h>
#include<string.h>
int main()
{
    int i,j,max,p,l,c[500],count;
    char a[500],b[500];
    printf("Enter a word : ");
    gets(a);

    l=strlen(a);
    printf("%d",l);
    printf("\n");
    for(i=0 ; i<l ; i++)
        b[i]=a[i];
    for(i=0 ; i<l ; i++)
    {
        count=0;
        for(j=0 ; j<l ; j++)
        {
            if(a[i]==b[j])
                count=count+1;
        }
        c[i]=count;
    }
    max=c[1];
    for(i=0 ; i<l ; i++)
    {
        if(c[i]>max)
        {
            max=c[i];
            p=i;
        }
    }
       for(i=0 ; i<l ; i++)
    {
        if(a[i]!=a[p])
            printf("%c",a[i]);
    }
}
