/* primjer unosi dva stringa koji predstavljaju prezime i ime osobe i 
   formira string osoba formata "prezime ime" */
   
#include<stdio.h>
#include <string.h>

int main()
{
    char ime[16], prezime[16], osoba[32];
    
    printf("Unesi ime osobe: ");
    fflush(stdin);
	gets(ime);
    printf("Unesi prezime osobe: ");
    fflush(stdin);
	gets(prezime);
	
	strcpy(osoba, prezime);
	strcat(osoba, " ");
	strcat(osoba, ime);
	
	printf("Osoba je %s.\n", osoba);
    
}   
