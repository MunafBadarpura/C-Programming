#include <stdio.h>
#include <string.h>
// typedef float pointvalue;
int main (){
    // pointvalue b = 10.22;
    // printf("%f",b);

    //USING TYPEDEF
     typedef struct book{
        char name[50];
        float price;
        int pages;
    } MB;

    MB a;
  
    
    strcpy(a.name,"Birbal");
    a.price = 140.50;
    a.pages = 120;

    printf("Name %s\n",a.name);
    printf("Prise %.2f\n",a.price);
    printf("Pages %d",a.pages);
    

    return 0;
}

    