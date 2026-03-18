/* primjer sadrzaj ove datoteke 04 - Datoteke 04.cpp ispisuje na ekran */

#include <stdio.h>

int main()
{
 	FILE *dat;
	char znak;
	
	printf("Sadrzaj datoteke 04 - Datoteke 04.cpp je:\n");
	dat = fopen("04 - Datoteke 04.cpp", "r");	
	
	while(!feof(dat))
	{
		znak = fgetc(dat);
		putchar(znak);
	}
	
	fclose(dat);
	
	/* kraj */
	char z;
	fflush(stdin);
	z = getchar();
	return 0;
} 
