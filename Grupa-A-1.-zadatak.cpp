/* Program uèitava string, broji koliko se puta u njemu ponavlja slog 'moj' i broj ponavljanja ispisuje na ekran. */

#include <stdio.h>
#include <string.h>

int main()
{
	char string[100];
	int i, br=0;
	
	printf("Unesi string:\n");
	fflush(stdin);
	gets(string);
	
	for(i=0; i<strlen(string); i++)	
	{
		if(string[i]=='m' && string[i+1]=='o' && string[i+2]=='j')
		br++;
	}
	
	printf("Slog 'moj' se u stringu ponavlja %d puta.", br);
	
	/* Kraj */
	char z;
	fflush(stdin);
	z = getchar();
	return 0;
	
}
