/*Challenge 3 : Conversion de la distance
Écrivez un programme qui demande la distance en kilomètres et la transforme en yards. Formule :

Yards = Km * 1093.61*/
#include <stdio.h>
#include <windows.h>
float km ;
float yards ; 
int main(){
printf("vouillier entrer la distance en km : ");
scanf("%f" ,&km);
yards = km * 1093.61;
system("cls");
printf("la distance est equivalant a %f yards .", yards);
return 0;
}
