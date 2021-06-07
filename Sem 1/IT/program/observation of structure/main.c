#include <stdio.h>
kavit add(kavit a , kavit b)
{
   kavit c;
   c.real=a.real+b.real;
   c.complex=a.complex+b.complex;
   return c;
}
int main()
{
    typedef struct{
       int  real;
      int  complex;
    }kavit;

    kavit a,b,c;
    scanf("%d%d%d%d",a.real,a.complex,b.real,b.complex);
    c=add(a,b);
    printf("%d %d",c.real,c,complex);
}
