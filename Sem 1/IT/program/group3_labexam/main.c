#include <stdio.h>
int main()
{
   int a[15],i,j,max=0,k=0,p,count;
   for(i=0 ; i<15 ; i++)
   {
       printf("Enter the %d number : ",i+1);
       scanf("%d",&a[i]);
   }
   for(i=0 ; i<15 ; i++)
   {
       count=0;
       for(j=i ; j<15 ; j++)
       {
           if(a[i]==a[j])
            count=count+1;
       }
       if(count>max)
       {
           max=count;
           p=a[i];
       }
    }
    printf("%d %d \n",max,p);

    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==p)
        {

            for(j=i ; j<14 ; j++)
            {
                a[j]=a[j+1];
            }
            i=i-1;
        }
    }
    for(i=0 ; i<max ; i++)
      a[14-i]=p;

    for(i=0 ; i<15; i++)
        printf("%d\n",a[i]);
}
