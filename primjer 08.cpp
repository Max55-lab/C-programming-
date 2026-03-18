/* primjer unosi tekst i ispisuje koliko puta se u njemu ponavlja slog 'ma' */

#include <stdio.h>
#include <string.h>

int main()
{
	char tekst[256];
	int i, bp = 0;
	
	printf("Unesi tekst: ");
	fflush(stdin);
	gets(tekst);
	
	/* parsiranje stringa do predzadnjeg znaka */
	for(i = 0; i < strlen(tekst) - 1; i++)
	    if((tekst[i] == 'm') && (tekst[i + 1] <= 'a'))
		    bp++;

	printf("U tekstu se slog ma ponavlja %d puta.\n", bp);
}
