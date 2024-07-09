#include <stdio.h>

void swap(int* x,int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}

int main(){
    int a=10;
    int b=20;

    swap(&a,&b);

    printf("the value of a is %d\n",a);
    printf("the value of b is %d",b);


}