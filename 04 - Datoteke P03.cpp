/* primjer cita sve brojeve iz datoteke brojevi.txt i 
   ispisuje ih na ekran*/

#include <stdio.h>

int main()
{
	int broj;
	FILE *dat; 		/* pokazivac na datoteku */
	
		/* otvaranje datoteke */
	dat = fopen("brojevi.txt", "r");
	
	if(dat == NULL)
	{
		printf("Greska u otvaranju datoteke!\n");
	}
	else
	{
 	    printf("Brojevi spremljeni u datoteci su: ");
 		/* citanje iz datoteke */
		while(!feof(dat))
		{
            fscanf(dat, "%d", &broj);
			printf("%d ", broj);
		}
		printf("\n");
				
		/* zatvaranje datoteke */
		fclose(dat);
	}

	/* kraj */
	char z;
	fflush(stdin);
	z = getchar();
}
