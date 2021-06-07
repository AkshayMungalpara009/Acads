#include <stdio.h>
int main()
{
    struct person{
                char a[40];
                char b[40];
                int age;
    }a[3];
      int i,max=0,p;
      for(i=0 ; i<3 ; i++)
      {
          scanf("%s",&a[i].a);
          scanf("%s",&a[i].b);
          scanf("%d",&a[i].age);
          printf("\n");
      }
      for(i=0 ; i<3 ; i++)
      {
          if(a[i].age>max)
          {
            max=a[i].age;
            p=i;
          }
      }
      printf("%s %s \n%d\n",a[p].a,a[p].b,max);
}

