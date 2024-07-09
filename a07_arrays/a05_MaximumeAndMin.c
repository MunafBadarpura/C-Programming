#include <stdio.h>

int main (){
    int arr[7] = {25,45,62,12,10,24,35};
    int max = arr[1];
    int min;
    for(int i=1;i<=6;i++){
        if(max<arr[i]){
            max = arr[i];
        }
        else{
            min = arr[i];
        }
    }
    printf("Maximume %d\n",max);
    printf("Miniume %d\n",min);
    

    
    
    
    return 0;
}