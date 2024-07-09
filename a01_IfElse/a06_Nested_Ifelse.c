#include <stdio.h>

int main() {
    int a;
    printf("enter Number\n");
    scanf("%d" ,&a);

    if(a%5==0){
        if(a%2==0){
            printf("number is divisable by 5 and 3\n");
        }
        else{
            printf("number is not divisable by 5 and 3\n");
        }

    }

    else{
        printf("number is nott divisable by 5 and 3\n");
    }




    return 0;
}