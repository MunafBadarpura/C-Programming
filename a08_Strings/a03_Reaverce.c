#include <stdio.h>

int main (){
    char str[40];
    printf("Enter a String\n");
    scanf("%[^\n]",str);
    int size = 0;
    int k=0;
    while(str[k]!='\0'){
        size++;
        k++;
    }

    for(int i=0,j=size-1;i<=j;i++,j--){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        

    }
    
    puts("Reversing : "); //puts automatic \n de deta hai..
    printf("%s",str);

    
    
    return 0;
}