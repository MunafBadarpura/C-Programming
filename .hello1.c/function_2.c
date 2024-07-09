#include <stdio.h>
#include <math.h>

void addnumber(int num1 , int num2){
    int sum = num1 + num2;
    printf("sum of %d and %d is %d\n" , num1 , num2 , sum);

}

void squrenumber(int number){
    int squre = number * number;
    printf("The Squre of %d is %d\n" , number , squre);
}

int main (){

    float result = sqrt(25);  // sqrt is for root
    printf("Squre root is %f\n" , result);

    addnumber(5,10);
    squrenumber(7);

    

    return 0;
}

