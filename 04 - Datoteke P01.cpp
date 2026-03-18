/* primjer unosi tri broja i sprema ih u datoteku brojevi.txt */

#include <stdio.h>

int main()
{
	int a, b, c;
	FILE *dat; 		/* pokazivac na datoteku */
	
	printf("Unesi tri cijela broja: ");
	scanf("%d %d %d", &a, &b, &c);
	
	/* otvaranje datoteke */
	dat = fopen("brojevi.txt", "a");
	
	if(dat == NULL)
	{
		printf("Greska u otvaranju datoteke!\n");
	}
	else
	{
 	    /* zapisivanje u datoteku */
		fprintf(dat, "%d %d %d ", a, b, c);
		printf("Brojevi su spremljeni u datoteku!\n");
		
		/* zatvaranje datoteke */
		fclose(dat);
	}

	/* kraj */
	char z;
	fflush(stdin);
	z = getchar();
}
