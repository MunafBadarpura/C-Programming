#include <stdio.h>

int main (){
    int triplets[8]={1,2,3,4,5,6,7,8};
    int x = 0;
    int a = 12;
    
    for(int i=0;i<=7;i++){
        for(int j=i+1;j<=7;j++){
            for(int k=j+1;k<=7;k++){
                if(triplets[i] + triplets[j] + triplets[k] == a){
                    x = x+1;
                    printf("(%d,%d,%d)\n",triplets[i],triplets[j],triplets[k]);
                }
    }
        }
            }            
    
    printf("%d",x);


    return 0;
}