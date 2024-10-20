/*Challenge 4 : Conversion de la vitesse
Écrivez un programme qui demande la vitesse en kilomètres par heure (km/h) et la transforme en mètres par seconde (m/s). Formule :

m/s = km/h * 0.27778*/
#include <stdio.h>
#include <windows.h>
float kmh ;
float ms ; 
int main(){
printf("vouillier entrer la vitesse en km/h : ");
scanf("%f" ,&kmh);
ms = kmh * 0.27778;
system("cls");
printf("la vitesse est equivalant a %f m/s .", ms);
return 0;
}
