#include <stdio.h>
#include<string.h>
    struct book{
        char name[50];
        float price;
        int pages;
    };
int main (){

    struct book a;
   
    
    strcpy(a.name,"Birbal");
    a.price = 140.50;
    a.pages = 120;

    printf("Name %s\n",a.name);
    printf("Prise %.2f\n",a.price);
    printf("Pages %d",a.pages);
    
    
    return 0;
}