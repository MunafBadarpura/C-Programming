#include <stdio.h>

int main()
{

    int a,b,c;
    printf("Enter a\n");
    scanf("%d", &a);

    printf("Enter b\n");
    scanf("%d", &b);

    printf("Enter c\n");
    scanf("%d", &c);

   if(a>b){
    if(a>c)
    printf("%d is big\n" ,a);

    else //c>a
    printf("%d is big\n" ,c);

   }

   else //b>a
   if(b>c)
   printf("%d is big\n" ,b);

   else //c>b
   printf("%d is big\n" ,c);













return 0;
}