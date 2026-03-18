/* primjer ucitava dva stringa sa tastature koji predstavljaju 
   ime i prezime i formira novi string oblika PREZIME RAZMAK IME */

#include <stdio.h>
#include <string.h>

int main()
{
    char ime[15], prezime[15], prezime_ime[30];
    
    printf("Unesi ime: ");
    fflush(stdin);
    gets(ime);
    printf("Unesi prezime: ");
    fflush(stdin);
    gets(prezime);
    
    strcpy(prezime_ime, prezime);
    strcat(prezime_ime, " ");
    strcat(prezime_ime, ime);

    printf("Prezime i ime su: %s\n",prezime_ime);
    

    /* kraj */
    char z;
    fflush(stdin);
    z = getchar();
    return 0;
}
