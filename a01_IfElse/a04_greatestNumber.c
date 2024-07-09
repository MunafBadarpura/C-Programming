#include <stdio.h>

int main()
{

    int a;
    printf("Enter a\n");
    scanf("%d", &a);

    int b;
    printf("Enter b\n");
    scanf("%d", &b);

    int c;
    printf("Enter c\n");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("%d is biggest number\n" ,a);
    }

    if (b > a && b > c)
    {
        printf("%d is biggest number\n" ,b);
    }

    if (c > a && c > b)
    {
        printf("%d is biggest number\n",c);
    }

    if (a == b && b == c)
    {
        printf("all numbers are equal\n");
    }

    return 0;
}