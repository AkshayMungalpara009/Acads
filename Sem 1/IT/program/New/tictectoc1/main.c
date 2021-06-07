#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int n,k,flag=0;
    char a[9];
    for(k=0 ; k<9 ; k++)
        a[k]=' ';
    a[4]='O';
    k=2;
    printf("Game : Tic Tac Toc.\n Let's Play...\n\n\n");
    while(1)
    {
        if(k==4)
        {
        switch(n)
        {
           case 1:a[6]='O';break;
           case 2:a[6]='O';break;
           case 3:a[6]='O';break;
           case 4:a[6]='O';break;
           case 6:a[6]='O';break;
           case 7:a[2]='O';break;
           case 8:a[6]='O';break;
           case 9:a[6]='O';break;
           default :printf("ERROR!!! Please Enter Proper Block Number.\n");
        }
        }
        if(k==6)
        {
            if(n==3 && a[5]==' ' && a[3]==' ' && a[2]==' ' && a[0]==' ' && a[6]==' ')
                a[0]='O';
            else if(n==3 && a[8]=='+'&&a[6]=='0')
                a[5]='O';
            else if(n==3 && a[3]!=' ')
            {
                a[8]='O';
                printf("You have no chance to win!!!\n");
                flag=2;
            }
            else if(n==9 && a[6]=='X')
                a[7]='O';
            else if(a[3]=='X'&&a[6]=='O'&&n!=3)
            {
                a[2]='O';flag=2;
            }
            else if(a[6]!=' ' && n==8)
            {
                a[8]='O';
                printf("You have no chance to win!!!\n");
                flag=2;
            }
            else if(a[6]=='X'&& n==2)
            {
                a[8]='O';
                printf("You have no chance to win!!!\n");
                flag=2;
            }
            else if(n==6 && a[6]=='X')
            {
                a[0]='O';
                printf("You have no chance to win!!!\n");
                flag=2;
            }
            else if(n==6 && a[2]!=' ')
            {
                a[8]='O';
                printf("You have no chance to win!!!\n");
                flag=2;
            }
            else if(a[0]!=' ' && a[2]!=' ' && a[6]==' ')
                a[1]='O';
            else if(a[0]=='X' && a[6]=='X')
                a[3]='O';
            else if(a[2]==' ' && a[0]=='X')
            {
                a[2]='O';flag=2;
            }
           else if(a[2]==' ')
           {
                a[2]='O';flag=2;
           }
           else if(a[0]=='X'&&a[2]=='X'&&a[6]=='O')
                a[1]='O';
           else
           {
                a[0]='O';flag=2;
           }
        }
        if(k==8)
        {
           if(n==9)
               a[5]='O';
              // else if(n==8&&)
                //printf("Match is draw.\n");
               else if(a[2]=='X'&&a[8]=='X'&&a[3]=='X')
                    a[7]='O';
               else if(a[2]=='X'&&a[8]=='X'&&a[4]=='O'&&a[5]=='O'&&a[3]!='X')
                {
                    printf("Computer is Win.\n");break;
                }
               else if(n==6 && a[0]=='X' && a[6]=='X')
                    a[7]='O';
               else if(a[7]=='X'&&a[1]=='O'&&a[0]=='X'&&a[2]=='X')
                    a[3]='O';
               else
                 flag=2;
        }
        if(k==10)
        {
           if(n==4 && a[3]==' ')
           {
               a[7]='O';flag=1;
           }
            else if(a[2]=='X'&&a[8]=='X'&&a[3]=='X'&&a[1]=='X')
                    {printf("Match is Draw.\n");break;}
            else if(a[2]=='X'&&a[8]=='X'&&a[3]=='X'&&a[1]!='X')
               {
                  a[1]='O';flag=2;
               }
            else if(a[7]=='X'&&a[1]=='O'&&a[0]=='X'&&a[2]=='X'&&a[3]=='O'&&n!=6)
           {
               a[5]='O';flag=2;
           }
           else if(n==2)
           {
               a[8]='X';flag=1;
           }
           else if(a[0]=='X'&&a[2]=='X'&&a[5]=='X')
           {
               a[8]='O';flag=1;
           }
           else
           {
               printf("Computer is win.\n");break;
           }
        }
         system("CLS");
       printf("  %c|%c |%c\n",a[0],a[1],a[2]);
       printf(" --------\n");
       printf("  %c|%c |%c\n",a[3],a[4],a[5]);
       printf(" --------\n");
       printf("  %c|%c |%c\n",a[6],a[7],a[8]);
       if(flag==1)
       {
           system("CLS");
           printf("\n\n\n");
           printf("  %c|%c |%c\n",a[0],a[1],a[2]);
           printf(" --------\n");
           printf("  %c|%c |%c\n",a[3],a[4],a[5]);
           printf(" --------\n");
           printf("  %c|%c |%c\n",a[6],a[7],a[8]);
           printf("\nMatch is draw...\n");break;
       }
       if(flag==2)
       {
           system("CLS");
           printf("\n\n\n");
           printf("  %c|%c |%c\n",a[0],a[1],a[2]);
           printf(" --------\n");
           printf("  %c|%c |%c\n",a[3],a[4],a[5]);
           printf(" --------\n");
           printf("  %c|%c |%c\n",a[6],a[7],a[8]);
           printf("\nComputer is Win...\n");break;
       }
      kavit: printf("Enter a block number :");
       scanf("%d",&n);
        switch(n)
       {
           system("CLS");
           case 1:a[0]='X';break;
           case 2:a[1]='X';break;
           case 3:a[2]='X';break;
           case 4:a[3]='X';break;
           case 6:a[5]='X';break;
           case 7:a[6]='X';break;
           case 8:a[7]='X';break;
           case 9:a[8]='X';break;
           default :printf("ERROR!!! Please Enter Proper Block Number.\n");goto kavit;
       }k=k+2;
    }
}
