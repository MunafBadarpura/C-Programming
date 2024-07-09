#include <stdio.h>

int main (){
    int id,unit;
    char name[50];
    float charge = 0,surcharge = 0,amount = 0;
    printf("Enter Customer ID : ");
    scanf("%d",&id);
    printf("Enter Customer Name : ");
    scanf("%s",name);
    printf("Enter Consumed Unit : ");
    scanf("%d",&unit);

    if(unit<=199){
        charge = 1.20;
    }
    else if(unit>=200 && unit<=399){
        charge = 1.50;
    }
    else if(unit>=400 && unit<=599){
        charge = 1.80;
    }
    else if(unit>=600){
        charge = 2;
    }

    if(unit>=400){
        surcharge = unit * 0.15;
    }
    amount = (unit * charge) + surcharge *2;
    

    printf("Customer ID : %d\n",id);
    printf("Customer Name : %s\n",name);
    printf("Consumed Unit : %d\n",unit);
    printf("Amount Charge @Rs %.2f per unit : %.2f\n",charge,unit*charge);
    printf("Surchage Charge : %.2f\n",surcharge*charge);
    printf("Total Amount : %.2f",amount);


    




    return 0;
}