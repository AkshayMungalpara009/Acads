#include <stdio.h>

int main(void)
{
	int *p,i,j,k,t,n,l,count,flag=0;
	scanf("%d",&t);
	scanf("%d",&n);
	scanf("%d",&k);

	for(i=0 ; i<t ; i++)
	{
	    count=0;
	    p=(int*)malloc(n*sizeof(int));
	    for(j=0 ; j<n ; j++)
	      scanf("%d",&p[j]);
	      while(k!=0)
	      {
	         for(j=0 ; j<n ; j++)
	            {
	               for(l=j ;l<n ; l++)
	                   {
	                       if(p[j]==p[l])
	                       {
	                         p[j]=-1;
	                         k=k-1;
	                         break;
	                       }
	                       else if(j==n-2)
	                       {
	                           flag=1;
	                         printf("%d\n",n-k);
	                       }
	                   }
	            }
	      }
	      if(flag==0)
	      {
	  for(j=0 ; j<n ; j++)
	  {
	      if(p[j]!=1)
	      count=count+1;
	  }
	  printf("%d\n",count);
	      }
	}
	return 0;
}
