#include <stdio.h>


int main (){
    int i= 34;
    int *j= &i;
    printf("The value of i if %d\n" ,i);
    printf("The value of i if %d\n" , *j);
    //for address
    printf("The address of i is %u\n" ,&i);
    printf("The address of i is %u\n" ,j); 
    //address of j
    printf(" OF J\n");
    printf("The address of j is %u\n" ,&j);
    printf("The value of j is %d\n" ,*(&j));

    
    
    return 0;
}