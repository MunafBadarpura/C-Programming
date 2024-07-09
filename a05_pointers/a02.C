#include <iostream>
using namespace std;
void swap(int *x,int *y){
    int temp;
    temp = *x; // temp = 10
    *x = *y;   // a = 20
    *y = temp; // b = 10
    return;
}

int main (){
    int a = 10;
    int b = 20;

    swap(&a,&b);

    // printf("a is %d\n",a);
    // printf("b is %d",b);


    cout<<"a is "<< a <<endl;
    cout<<"b is "<< b;
    
    
   
}