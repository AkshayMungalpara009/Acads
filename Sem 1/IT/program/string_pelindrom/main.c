#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char a[500];
    int i,j=0,l;
    gets(a);
    l=strlen(a);

    if(l%2!=0)
       {
           for(i=0 ; i<(l-1)/2 ; i++)
          {
           if(a[i]!=a[l-i-1])
             {
                j=1;
                break;
             }
          }
       }
       else
        {
           for(i=0 ; i<(l/2) ; i++)
            {
                if(a[i]!=a[l-i-1])
                    {
                        j=1;
                        break;
                    }
            }
        }
     if(j!=1)
        printf("String is pelindrom.");
     else
        printf("String is not pelindrom.");
    return 0;
}
