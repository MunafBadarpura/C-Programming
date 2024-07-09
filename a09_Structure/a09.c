#include<stdio.h>

int prime(){
    int a, flag = 1;
    printf("Enter value : ");
    scanf("%d", &a);

    if(a==0 || a==1) return 2;

    for(int i=2;i<a;i++){
        if(a%i==0){
            flag = 0;
            break;
        }
    }

    return flag;
}

int main(){
    int f = prime();

    if(f==1){
        printf("Number is Prime");
    }
    else if(f==0){
        printf("Number is Composite");
    }
    else{
        printf("Number id nither Prime nor Composite");
    }
}