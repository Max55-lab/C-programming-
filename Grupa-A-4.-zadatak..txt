/* Definirajte funkciju
		int duljina_stringa(char *str1)
	
	koja ommoguæava raèunanje duljine stringa str1(ne koristiti funkciju strlen!)
	U glavnom programu inicijalizirati string, te pozvati funkciju i ispisati mu duljinu. */
	
#include <stdio.h>
#include <string.h>

/* Sporedna funkcija */
int duljina_stringa(char *str1)
{
	int i;
	i=0;
	do
	{
		i++;
	}
	while(str1[i]!='\0');
	
	return i;
}

/* Glavni program */
int main()
{
	char str1[100];
	
	/* Unos stringa */
	printf("Unesi string:\n");
	fflush(stdin);
	gets(str1);
	
	/* Poziv sporedne funkcije i ispis */
	printf("Duljina stringa je: %d.\n", duljina_stringa(str1));
	
	/* Moze i ovako: 
	a=duljina_stringa(str1);
	printf("Duljina stringa je: %d.\n", a); */
	
	/* Kraj */
	char z;
	fflush(stdin);
	z = getchar();
	return 0;
}
