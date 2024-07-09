#include <stdio.h>

int main (){
    typedef struct date{
        int day;
        int month;
        int year;
    }date;

    date a,b;
    a.day = 24;
    a.month = 8;
    a.year = 2006;

    b.day = 8;
    b.month = 9;
    b.year = 2023;

    if(a.day==b.day && a.month==b.month && a.year == b.year) 
        printf("Dates are same\n");
    else
        printf("Dates are diffrent\n");
    
    
    return 0;
}