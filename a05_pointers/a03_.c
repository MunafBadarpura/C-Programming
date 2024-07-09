#include <stdio.h>

int main (){
    char num;
    printf("Enter Number Charecter Or Special Character : ");
    scanf("%c",&num);
    if((num>='a' && num<='z') || ( num>='A' && num<='Z')){
        printf("It Is A Alphabet");
    }
    else if(num>='0' && num<='9'){
        printf("It Is A Number");
    }
    else{
        printf("It Is A Special Charecters");
    }
    return 0;
}