#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int a[500],b[500],i,j,l1,l2,count,c[500],d[500];
    printf("Enter the first array :");
    getc(a);
    printf("Enter the secondarray :");
    getc(b);
    l1=strlen(a);
    l2=strlen(b);

    for(i=0 ; i<l1 ; i++)
    {
        count=0;
        for(j=0 ; j<l1 ; j++)
        {
            if(a[i]==a[j])
            {
                count=count+1;
            }
            a[i]=count;
        }
    }


    for(i=0 ; i<l2 ; i++)
    {
        count=0;
        for(j=0 ; j<l2 ; j++)
        {
            if(b[i]==b[j])
            {
                count=count+1;
            }
            b[i]=count;
        }
    }
}
