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

    if(k>=1)





}
