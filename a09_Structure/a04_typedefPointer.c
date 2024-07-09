#include <stdio.h>
typedef int* pointer;
int main (){
    int a=4,b=8;

    pointer x = &a,y = &b;
    printf("%p\n",x);
    printf("%p",y);
    
    
    return 0;
}