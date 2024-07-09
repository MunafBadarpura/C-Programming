#include <stdio.h>

int main() {
    int a, b, c;


    printf("Enter the lengths of three sides: ");
    scanf("%d %d %d", &a, &b, &c);

    
   if (a+b > c && b+c > a && a+c >b )           
   {
    printf("Triangle is Valid");
   }


   else{
    printf("Triangle is InValid");
   }
   

    return 0;
}
