#include <stdio.h>



#include<math.h>

int main (){
    int a,b,c;
    printf("ENTER a(ONLY NUMBERS)=");
    scanf("%d" , &a);

    printf("ENTER b(ONLY NUMBERS)=");
    scanf("%d" , &b);

    printf("ENTER c(ONLY NUMBERS)=");
    scanf("%d" , &c);


    if (a>b && a>c)
    {
       printf("a is the largest number\n");
    }

    else if (b>c)
    {
       printf("b is the largest number\n");
    }

    else if (c>a)
    {
       printf("c is the largest number\n");
    }

   
     else if (a=b=c){
        printf("ALL NUMBERS ARE EQULE");
    }

    
    
    
    
    
    
    return 0;
}