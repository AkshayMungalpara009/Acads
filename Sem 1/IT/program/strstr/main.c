#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char a[500],b[500];
    int i,j,l1,l2,count,flag=0,p;
    printf("Enter a first string :");
    gets(a);
    printf("Enter a second string :");
    gets(b);
    l1=strlen(a);
    l2=strlen(b);
    printf("%d %d\n",l1,l2);

    for(i=0 ; i<l1 ; i++)
    {
        count=0;
        for(j=0 ; j<l2 ; j++)
        {
            if(a[i]==b[j])
            {
                i=i+1;
                count=count+1;
                flag=1;
            }
            else
            {
                i=i-count;
                break;
            }

            if(flag==1)
            {
               p=i-count;
               break;
            }
        }
        if(flag==1)
            break;
    }
    printf("your index is %d.\n",p);
}
