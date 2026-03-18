/* primjer unosi tekst i formira novi tako da iz unesenog uzima samo slova i razmake
   s tim da velika slova zamijeni malima i obrnuto koristenjem funkcija iz ctype.h 
   datoteke zaglavlja */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char T1[256], T2[256];
	int i, j = 0, razlika = 'a' - 'A';
	
	printf("Unesi tekst: ");
	fflush(stdin);
	gets(T1);
	
	/* parsiranje stringa */
	for(i = 0; i < strlen(T1); i++)
	    if((T1[i] == ' ') || (isalpha(T1[i])))
		{	
		    if(islower(T1[i]))
			    T2[j] = toupper(T1[i]);
			else
			    T2[j] = tolower(T1[i]);
			j++;
		}
	T2[j] = '\0';
	
	printf("Novi tekst je: %s\n", T2);
}
