#include<stdio.h>



void sort(int a[])
{
   int b,i,j;
   for(j=1 ; j<10 ; j++)
   {
   for(i=0 ; i<5 ; i++)
   {
    if(a[i]>a[i+1])
    {
        b=a[i];
        a[i]=a[i+1];
        a[i+1]=b;
    }
   }
   }
  for(i=0 ; i<6 ; i++)
    printf("%d ",a[i]);
    
}
void avgrage(int a[])
{
   int i,j,sum=0;
   float avg;
    for(i=0 ; i<6 ; i++)
    {
     sum=sum+a[i];
    }
    avg=sum/6;
    printf("your avgrage is %f\n",avg);
    
}
void reverse(int a[])
{
    int i,p;
   for(i=0 ; i<=2 ; i++)
   {
      p=a[i];
      a[i]=a[5-i];
      a[5-i]=p;
   }
   
}
void search(int a[] , int m)
{
    int M,L=0,H=5;
    //printf("in search");
    while(1)
     {
        M=(H+L)/2-L;
       if(a[M]==m)
          {
               printf("%d is found at %d",a[M],M);
               break;
          }  
       else if(a[M]<m)
       
          L=M+1;
          
       else
          H=M-1;             
     }
}

int main(void)
{
  int n,i,j,k;
 
  while(1)
  {
    printf("1.Sort the array.\n");
    printf("2.calculate the avg of all elements.\n");
    printf("3.reverse the array.\n");
    printf("4.binary search.\n");
    printf("5.exit.\n");
    printf("Enter a number.\n");
    scanf("%d",&n);
     
    if(n==1)
    {
      int a[6];
      printf("Enter array elements.\n");
      for(i=0 ; i<6 ; i++)
      {
         scanf("%d",&a[i]); 
      }
      sort(a);
      printf("\n");

    }
    else if(n==2)
    {
       int a[6];
      printf("Enter array elements.\n");
      for(i=0 ; i<6 ; i++)
      {
         scanf("%d",&a[i]); 
      }
      avgrage(a);
      printf("\n");
    }
    else if(n==3)
    {
       
       int a[6];
      printf("Enter array elements.\n");
      for(i=0 ; i<6 ; i++)
      {
         scanf("%d",&a[i]); 
      }
      reverse(a);
      printf("\n");
    }
    else if(n==4)
    {
     int a[6],m;
      printf("Enter array elements.\n");
      for(i=0 ; i<6 ; i++)
      {
         scanf("%d",&a[i]); 
      }
      printf("Enter number which you want to found : ");
      scanf("%d",&m);
      search(a,m);
      printf("hello\n");
    }
    else
    break;
  }
}
