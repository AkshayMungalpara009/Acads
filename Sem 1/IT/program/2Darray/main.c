#include <stdio.h>
#include <stdlib.h>

int main()
{
   //int values[2][3];
   int values[2][3]={{5,3,8},{9,7,4}};
    printf("%d",*(*(values)+1));
}
