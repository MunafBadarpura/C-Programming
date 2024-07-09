#include <iostream>
using namespace std;
int main (){
    int a = 10;
    int* x = &a;
    int** y = &x;

    // printf("%p\n",&x);
    // printf("%p",y);
    cout<<&x<<endl;
    cout<<y;
    
    
    
}