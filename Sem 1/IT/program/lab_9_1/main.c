#include<stdio.h>
#include<string.h>
int roman(char a[] , int l)
{
 int i,p,sum=0;


   for(i=0 ; i<l; i++)
   {
     if(a[i]=='I' && a[i+1]!='V' && a[i+1]!='X')
       p=1;

     if(a[i]=='V')
       p=5;

     if(a[i]=='X' && a[i+1]!='L' &&a[i+1]!='C')
       p=10;

     if(a[i]=='L')
       p=50;

     if(a[i]=='C' &&a[i+1]!='D' && a[i+1]!='M')
       p=100;

     if(a[i]=='D')
       p=500;

     if(a[i]=='M')
       p=1000;

     if(a[i]=='I' && a[i+1]=='V')
     {
       i=i+1;
       p=4;
     }

     if(a[i]=='I' && a[i+1]=='X')
     {
     i=i+1;
       p=9;
       }

     if(a[i]=='X' && a[i+1]=='L')
     {
     i=i+1;
       p=40;
     }

     if(a[i]=='X' && a[i+1]=='C')
     {
        i=i+1;
       p=90;
     }

     if(a[i]=='C' && a[i+1]=='D')
     {
       i=i+1;
       p=400;
     }

     if(a[i]=='C' && a[i+1]=='M')
     {
       i=i+1;
       p=900;
     }
     sum=p+sum;
  }
return sum;
}
void decimal(int k)
{
    int p,flag=0;
    p=k;
    while(p!=1 && flag==0)
    {

       switch(p)
    {
        case 1   : printf("I");flag=1;break;
        case 4   : printf("IV");flag=1;break;
        case 5   : printf("V");flag=1;break;
        case 9   : printf("IX");flag=1;break;
        case 10  : printf("X");flag=1;break;
        case 40  : printf("XL");flag=1;break;
        case 50  : printf("L");flag=1;break;
        case 90  : printf("XC");flag=1;break;
        case 100 : printf("C");flag=1;break;
        case 400 : printf("CD");flag=1;break;
        case 500 : printf("D");flag=1;break;
        case 900 : printf("CM");flag=1;break;
        case 1000: printf("M");flag=1;break;
        default:
            {
                if(p>1 && p<4)
                 {
                    p=p-1;
                    printf("I");
                 }
                 if(p>5 && p<9)
                 {
                     p=p-5;
                     printf("V");
                 }
                 if(p>10 && p<40)
                 {
                     p=p-10;
                     printf("X");
                 }
                 if(p>40 && p<50)
                 {
                     p=p-40;
                     printf("XL");
                 }
                 if(p>50 && p<90)
                 {
                     p=p-50;
                     printf("L");
                 }if(p>90 && p<100)
                 {
                     p=p-90;
                     printf("XC");
                 }
                 if(p>100 && p<400)
                 {
                     p=p-100;
                     printf("C");
                 }
                 if(p>400 && p<500)
                 {
                     p=p-400;
                     printf("CD");
                 }
                if(p>500 && p<900)
                 {
                     p=p-500;
                     printf("D");
                 }
                if(p>900 && p<1000)
                 {
                     p=p-900;
                     printf("M");
                 }
            }
            if(flag==1)
                break;
    }
    }
    if(flag==0)
    printf("I");
}
int main(void)
{
   char a[500];
   int i,j,l,n,k;
   printf("Enetr a roman number :");
   gets(a);
   l=strlen(a);
   printf("Enter a number :");
   scanf("%d",&n);

    j=roman(a,l);
    //printf("%d",j);

    k=n*j;
    printf("product of two numbers is %d\n",k);

    decimal(k);
}

