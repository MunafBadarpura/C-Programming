#include <stdio.h>


int main (){
    int arr[3][3] = {5,4,9,5,1,3,4,17,6};
    int max = arr[0][0];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
          if(max < arr[i][j]){
        
            max = arr[i][j];
          
          }

        }
        
    }
    printf("maximume number is %d",max);

    
    
    return 0;
}