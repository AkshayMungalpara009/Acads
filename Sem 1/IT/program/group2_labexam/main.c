#include <stdio.h>
#include<string.h>
int main()
{
    char a[500],k;
    int i,l,j,max=0,count;
    printf("Enter the string :");
    gets(a);
    l=strlen(a);
    for(i=0 ; i<l ; i++)
    {
        count=0;
        for(j=i ; j<l ; j++)
        {
            if(a[i]==a[j])
                count=count+1;
        }
        if(count>max)
        {
            max=count;
            k=a[i];
        }
    }
    for(i=0 ; i<l ; i++)
    {
        if(a[i]!=k)
            printf("%c",a[i]);
    }
}
