#include <stdio.h>
int power(int a,int b){

    if(b==1) return a; 
    if (b==0) return 1;
    int d = power(a,b/2); 

    if(b%2==0){
    return  d * d;
    }

    if(b%2!=0){
    return  d * d * a;
    }  

}


int main (){
    int a;
    printf("Enter number a: ");
    scanf("%d",&a);
    int b;
    printf("Enter number b: ");
    scanf("%d",&b);

     int c = power (a,b);
    printf("a power b is %d",c);

    
    return 0;
}