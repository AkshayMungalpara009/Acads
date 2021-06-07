#include <stdio.h>
int main()
{
   char a=' ';
   printf("%c",a);
   do
    {
        printf("Enter the character :");
        scanf("%c",&a);
        printf("1\n");
        if(a=='%')
            break;
        printf("2\n");
         else if(a=='a' || a=='e' || a=='i' || a=='o' ||  a=='u' ||  a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
          {
             printf("your character is vowel.\n");
          }
printf("3\n");
        else
            printf("your character is consonant.\n");
printf("4\n")
     }while(a!='%');
}
