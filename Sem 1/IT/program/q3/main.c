#include <stdio.h>
#include<string.h>
void  pelindrom(char a[] , int l , int l1)
{
    static int j=0,i=0;
    if(i==l1/2)
        printf("Your string is pelindrom.");
    else if(a[i]==a[l-1] && i<l1/2 && j!=l1)
    {
         i=i+1;
         j=j+1;
         pelindrom(a,l-1,l1);
    }
    else
        printf("Your string is not pelindrom.");
}
int main()
{
   char a[50];
   int i,l,l1;
   printf("Enter a string : ");
   scanf("%s",a);
   l=strlen(a);
   l1=l;
   pelindrom(a,l,l1);
}
