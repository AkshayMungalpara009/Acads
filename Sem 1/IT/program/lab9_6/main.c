#include <stdio.h>
int main(int n)
{
    static int count=0;
    count=count+1;
     printf("%d\n",count);
     if(count>9)
        return 0;
     else
        main(count);
}
