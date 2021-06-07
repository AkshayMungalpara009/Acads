#include <stdio.h>
#include<stdlib.h>
int main()
{
    printf("First chance is Zero and second is cross.\nLet's START...\n\n");
    int n,k=1;
    char a=' ',b=' ',c=' ',d=' ',e=' ',f=' ',g=' ',h=' ',i=' ',n1[20],n2[20];
    printf("Enter the first player name :");
    gets(n1);
    printf("\nEnter the second player name :");
    gets(n2);
    while(1)
    {
        system("CLS");
       printf("  %c|%c |%c\n",a,b,c);
       printf(" --------\n");
       printf("  %c|%c |%c\n",d,e,f);
       printf(" --------\n");
       printf("  %c|%c |%c\n",g,h,i);
       if(k%2==0)
       printf("%s turn :",n2);
       else
       printf("%s turn :",n1);
       scanf("%d",&n);
       switch(n)
       {
           case 1:if(k%2!=0)a='0';else a='+';break;
           case 2:if(k%2!=0)b='0';else b='+';break;
           case 3:if(k%2!=0)c='0';else c='+';break;
           case 4:if(k%2!=0)d='0';else d='+';break;
           case 5:if(k%2!=0)e='0';else e='+';break;
           case 6:if(k%2!=0)f='0';else f='+';break;
           case 7:if(k%2!=0)g='0';else g='+';break;
           case 8:if(k%2!=0)h='0';else h='+';break;
           case 9:if(k%2!=0)i='0';else i='+';break;
           default :printf("ERROR!!! Please Enter Proper Block Number.\n");
       }
       k=k+1;
       if(a==b && b==c && a!=' ')
       {
           if(a=='0')
            {printf("%s is win.",n1);break;}
           else{printf("%s is Win.",n2);break;}
       }
       if(c==d && d==e && c!=' ')
       {
           if(c=='0')
          {printf("%s is win.",n1);break;}
           else{printf("%s is win.",n2);break;}
       }
       if(g==h && h==i && g!=' ')
       {
          if(g=='0')
          {printf("%s is win.",n1);break;}
           else{printf("%s is win.",n2);break;}
       }
       if(a==d && d==g && a!=' ')
       {
          if(a=='0')
          {printf("%s is win.",n1);break;}
           else{printf("%s is win.",n2);break;}
       }
       if(b==e && e==h && b!=' ')
       {
          if(b=='0')
          {printf("%s is win.",n1);break;}
           else{printf("%s is win.",n2);break;}
       }
       if(c==f && f==i && c!=' ')
       {
          if(c=='0')
          {printf("%s is win.",n1);break;}
           else{printf("%s is win.",n2);break;}
       }
       if(a==e && e==i && a!=' ')
       {
          if(a=='0')
          {printf("%s is win.",n1);break;}
           else{printf("%s is win.",n2);break;}
       }
       if(c==e && e==g && c!=' ')
       {
          if(c=='0')
          {printf("%s is win.",n1);break;}
           else{printf("%s is win.",n2);break;}
       }
    }
}
