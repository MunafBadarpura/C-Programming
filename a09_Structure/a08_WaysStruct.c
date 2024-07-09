#include <stdio.h>

int main (){
       typedef struct pokemon{
        char name[20];
        int speed;
        int atteck;
        int power;
        char grade;
       }pokemon;

       pokemon pikachu = {"Pikachu",150,80,120,'A'};
       printf("%s\n",pikachu.name);
       printf("%d\n",pikachu.speed);
       printf("%d\n",pikachu.atteck);
       printf("%d\n",pikachu.power);
       printf("%c\n",pikachu.grade);
    
    
    return 0;
}