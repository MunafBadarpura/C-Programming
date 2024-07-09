#include <stdio.h>
#include <string.h>

int main (){
    typedef struct pokemon{
        char name[20];
        int speed;
        int atteck;
        char grade;
    }pokemon;

    typedef struct legendrypokemon{
        pokemon normal;
        int power;
    } legendrypokemon;

    legendrypokemon alok;
    alok.power = 150;
    strcpy(alok.normal.name,"God Alok");
    alok.normal.speed = 120;
    alok.normal.grade = 'a';

    typedef struct godpokemon{
        legendrypokemon legend;
        int superspeed;
    }godpokemon;
    
    godpokemon supra;
    supra.superspeed = 940;
    supra.legend.normal.atteck = 540;
    
    
    
    
    
    return 0;
}