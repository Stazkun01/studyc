/*Challenge 5 : Affichage Température
Écrivez un programme qui demande la température en Celsius et affiche l'état de l'eau à cette température (solide, liquide, gaz). Règle :

C < 0 : Solide
0 <= C < 100 : Liquide
C >= 100 : Gaz*/
#include <stdio.h>
float c;
int main(){
    printf("entrer votre temperature : ");
    scanf("%f" ,&c);
    if( c < 0 ){
        printf("l'etat de l'eau est solide");
    }
    else if (0 < c && c < 100){
        printf("l'etat de l'eau est liquide");
    }
    else if (c >= 100){
        printf("l'etat de l'eau est gazeux");
    }
}
