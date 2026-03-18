/* program pokazuje osnove rada s pokazivacima */

#include <stdio.h>

void main()
{
	int X = 10, *pX = &X, Y = 20, *pY = &Y;

	printf("Pocetno stanje:\n");
	printf("Pokazivac pX pokazuje na adresu %d na kojoj je vrijednost %d.\n", pX, *pX);
	printf("Pokazivac pY pokazuje na adresu %d na kojoj je vrijednost %d.\n", pY, *pY);
	printf("X = %d, Y = %d.\n\n", X, Y);

	pX = pY;
	printf("Nakon pX = pY:\n");
	printf("Pokazivac pX pokazuje na adresu %d na kojoj je vrijednost %d.\n", pX, *pX);
	printf("Pokazivac pY pokazuje na adresu %d na kojoj je vrijednost %d.\n", pY, *pY);
	printf("X = %d, Y = %d.\n\n", X, Y);

	pX = &X;
	pY = &Y;
	printf("Povratak na pocetno stanje:\n");
	printf("Pokazivac pX pokazuje na adresu %d na kojoj je vrijednost %d.\n", pX, *pX);
	printf("Pokazivac pY pokazuje na adresu %d na kojoj je vrijednost %d.\n", pY, *pY);
	printf("X = %d, Y = %d.\n\n", X, Y);

	*pX = *pY;
	printf("Nakon pX = pY:\n");
	printf("Pokazivac pX pokazuje na adresu %d na kojoj je vrijednost %d.\n", pX, *pX);
	printf("Pokazivac pY pokazuje na adresu %d na kojoj je vrijednost %d.\n", pY, *pY);
	printf("X = %d, Y = %d.\n\n", X, Y);
}