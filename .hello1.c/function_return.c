#include <stdio.h>
int multiply(int num1 , int num2){
    int sum = num1 * num2 ;
    // printf("Multiplication of %d and %d is %d\n" , num1 , num2 , sum);
    return sum;


}

int main (){
    int result = multiply(8,10);
    printf("Result = %d \n" ,result);

  
    
    return 0;
}