
    #include <stdio.h>
#include<string.h>
int main()
{
    char a[500],b[10],c[10];
    int i,j,l,count,w=0,len,flag,length,g;
    gets(a);
    l=strlen(a);
    printf("Enter the word which you want to remove :");
    gets(b);
    len=strlen(b);
    printf("Enter a word which you want to repalce :");
    gets(c);
    length=strlen(c);

    for(i=0 ; i<l ; i++)
    {
        flag=0;
        count=0;

        if(a[i]==' ' && a[i+len+1]==' ')
            g=1;
        else
            g=0;

        for(j=0 ; j<len ; j++)
        {
            if(a[i+1]==b[j] && g==1)
            {
                i=i+1;
                count=count+1;
            }
            else
            {
                i=i-count;
                flag=1;
                break;
            }
        }
              if(flag!=1)
               {
                i=i-count;
                a[i]=0;
               }
       }
    for(i=0 ; i<l ; i++)
    {
        if(a[i]!=0)
            printf("%c",a[i]);
        else
        {
            i=i+len;
            w=w+1;
          printf(" ");
          fputs(c,stdout);
          i=i+len;
        }
    }
    printf("\nyour word in sentence is %d times repeated.",w);
}


