#include <stdio.h>

int main() {
    int a;
    printf("enter Number\n");
    scanf("%d" ,&a);

    // if(a%5==0 || a%3==0){

    //     if(a!=15){
    //         printf("number is devisable by 5 or 3 but not 15\n");
    //     }

    //     else{
    //         printf("the number is divisable by 15\n");
    //     }
        
    // }

    // else{
    //     printf("number is not devisable by 5 or 3 or 15\n");
    // }


    //OR

    if((a%5==0 || a%3==0) && a!=15){

        printf("number is devisable by 5 or 3 but not 15");
    }

    else{
        printf("number is not matching requred condition \n");
    }








     return 0;
}