#include <stdio.h>

int main (){
    struct pokemon {
        int speed;
        int atteck;
        char power;
    }pikachu;
    //struct pokemon pikachu;
    pikachu.speed = 100;
    pikachu.atteck = 250;
    pikachu.power = 'A';
    printf("%d",pikachu.speed);

  
    

    
    
    return 0;
}