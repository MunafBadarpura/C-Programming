#include <stdio.h>

int main (){
     int arr[7] = {35,21,8,21,15,5,9};
     int x = 21;
     int found = 0;
    int idx = -1;
    
     for(int i=0;i<=6;i++){
        if(arr[i]==x){
           found = 1; //presen
           idx = i;
           break;
           
            
        }
     } 
        if(found==1){
            printf("%d is present in the array and its index is %d\n",x,idx);
        }       
        else{
            printf("%d is not present is the array\n",x);
        }
     
     
    return 0;
}