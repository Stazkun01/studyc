/*Challenge 2 : Conversion de la température
Écrivez un programme qui demande la température en Celsius et la transforme en Kelvin. Formule :

K = C + 273.15*/

#include <stdio.h>
#include <windows.h>
float C ;
float K ; 
int main(){
printf("vouillier entrer la temperature in C : ");
scanf("%f" ,&C);
K = C + 273.15;
system("cls");
printf("votre temperature est equivalant a %f kelvin .", K);
return 0;
}
