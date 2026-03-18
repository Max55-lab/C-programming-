/* program pokazuje osnove rada s pokazivacima */

#include <stdio.h>

void main()
{
	int X = 5, *pX;
	char Y = 'c', *pY;
	float Z = 3.14, *pZ;

	pX = &X;
	pY = &Y;
	pZ = &Z;

	printf("Varijabla X se nalazi na adresi %d i ima vrijednost %d.\n", &X, X);
	printf("Pokazivac pX pokazuje na adresu %d na kojoj je vrijednost %d.\n", pX, *pX);
	printf("Pokazivac pX zauzima %d bajta.\n\n", sizeof(pX));
	
	printf("Varijabla Y se nalazi na adresi %d i ima vrijednost %c.\n", &Y, Y);
	printf("Pokazivac pY pokazuje na adresu %d na kojoj je vrijednost %c.\n", pY, *pY);
	printf("Pokazivac pY zauzima %d bajt.\n\n", sizeof(pY));
	
	printf("Varijabla Z se nalazi na adresi %d i ima vrijednost %f.\n", &Z, Z);
	printf("Pokazivac pZ pokazuje na adresu %d na kojoj je vrijednost %f.\n", pZ, *pZ);
	printf("Pokazivac pZ zauzima %d bajta\n.", sizeof(pZ));
}