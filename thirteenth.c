/*Challenge 2 : Voyelle ou Non
Écrivez un programme en C qui vérifie si un caractère saisi par l'utilisateur est une voyelle ou non en utilisant l'instruction switch case.
a, e, i, o, u, y*/
#include <stdio.h>
char c ;
int main (){
    printf(" entrer le character : ");
    scanf("%c",&c);
    switch (c)
    {
    case 'a':
        printf("c'est un voyelle ! ");
        break;
    case 'i':
        printf("c'est un voyelle ! ");
        break;
    case 'e':
        printf("c'est un voyelle ! ");
        break;
    case 'u':
        printf("c'est un voyelle ! ");
        break;
    case 'o':
        printf("c'est un voyelle ! ");
        break;
    case 'y':
        printf("c'est un voyelle ! ");
        break;
    case 'A':
        printf("c'est un voyelle ! ");
        break;
    case 'I':
        printf("c'est un voyelle ! ");
        break;
    case 'E':
        printf("c'est un voyelle ! ");
        break;
    case 'U':
        printf("c'est un voyelle ! ");
        break;
    case 'O':
        printf("c'est un voyelle ! ");
        break;
    case 'Y':
        printf("c'est un voyelle ! ");
        break;
    default:
         printf("le character n'est pas un voyelle");
        break;
    }
}