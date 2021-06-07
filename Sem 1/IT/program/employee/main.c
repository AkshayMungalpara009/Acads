#include <stdio.h>
int main(void)
{
    struct empty
    {
        int code,date;
        char name[50];
    }a[5],*p;
    p=&a[0];
    int i,d;
    for(i=0 ; i<5 ; i++)
    {
        printf("Enter a code , name and joining date in DD/MM/YYYY formate : \n");
        scanf("%d %s %d",&p->code,p->name,&p->date);
        p++;
    }
    p=&a[0];
    printf("Enter a current date :");
    scanf("%d",&d);
    for(i=0 ; i<5 ; i++)
        {
            if((d%10000)-(a[i].date%10000)>=3)
                a[i].date=1;
            else
                a[i].date=0;
        }
        for(i=0 ; i<5 ; i++)
        {
            if(p->date==1)
                printf("%s\n",p->name);
                p++;
        }
}
