#include <stdio.h>

int main (){
    int arr[6] ={5,7,2,4,3,8};
    int a = 0;
    int b = 0;
    for(int i=0;i<=5;i++){
        if(arr[i]%2!=0){
            a = a + arr[i];
        }
        else {
            b = b + arr[i];
        }
    }
        printf("%d\n",b - a);
       


    
    return 0;
}