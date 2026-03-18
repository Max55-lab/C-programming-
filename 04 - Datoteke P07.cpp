/* primjer iz datoteke djeca.txt cita sve podatke o djeci 
   (ime, visina i tezina) i ispisuje imena najviseg i najtezeg
   djeteta u abecednom poretku */
   
#include <stdio.h>
   
struct Dijete
{
    char ime[16];
	int visina;
 	int tezina;	
};
   
int main()
{
    struct Dijete D[10], NVD, NTD;
	FILE *dat;
 	int i = 0, j;
	   
    dat = fopen("djeca.txt", "r");
    printf("%d\n", dat);
    while(!feof(dat))
    {
        fscanf(dat, "%s", D[i].ime);
        printf("%s ", D[i].ime);
		fscanf(dat, "%d", &D[i].visina);
		printf("%d ", D[i].visina);
        fscanf(dat, "%d", &D[i].tezina);
		printf("%d ", D[i].tezina);
		i++;
    }
	fclose(dat);
	
	for(j = 0; j < i; j++)
	    printf("%s %d %d\n", D[i].ime, D[i].visina, D[i].tezina);
	   
	NVD = D[0];
    for(j = 0; j < i; j++)
	    if(D[j].visina > NVD.visina)
	        NVD = D[i];
    printf("Najvise dijete je %s (%d cm).\n", NVD.ime, NVD.visina);
	   	
   	
   	
   }
