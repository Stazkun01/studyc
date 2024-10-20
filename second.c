//Challenge 1 : Affichage Informations
//Écrivez un programme en C qui va permettre d'afficher vos informations personnelles : nom, prénom, âge, sexe, et adresse email. Les données sont saisies à partir du clavier.
#include<stdio.h>
#include<windows.h>
char nom[50], prenom[50], sexe[100] , adresse_email[200];
int age ;
int main(){
printf("entrer ton nom : ");
scanf("%s" , nom);
printf("entrer ton prenom : ");
scanf("%s" , prenom);
printf("entrer ton age : ");
scanf("%d" , &age);
printf("entrer ton sexe : ");
scanf("%s" , sexe);
printf("entrer ton adress email : ");
scanf("%s" , adresse_email);
system("cls");
printf("ton nom complet est : %s  %s et tu est %d ans \ntu est un(e) %s avec l'adress email suivante :   %s " , nom , prenom , age , sexe , adresse_email);
return 0;
}