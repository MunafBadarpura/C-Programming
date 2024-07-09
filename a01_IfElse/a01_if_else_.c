#include <stdio.h>

int main(){

    int a;
    printf("enter Year\n");
    scanf("%d" ,&a);


    if(a%4==0 ,a%100!=0 ,a%400==0){
        printf("%d is Leep Year\n" ,a);
    }

    else  {
        printf("%d is Not Leap Year\n" ,a);
    }

     

    return 0;
}