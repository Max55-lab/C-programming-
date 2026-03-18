/* primjer unosi dva stringa i ispisuje koliko puta se u kraci string javlja u duzem */

#include <stdio.h>
#include <string.h>

int main()
{
	char T1[256], T2[256], D[256], K[256];
	int i, j, bp = 0, iz;
	
	printf("Unesi prvi string: ");
	fflush(stdin);
	gets(T1);
	printf("Unesi drugi string: ");
	fflush(stdin);
	gets(T2);
	
	/* provjera duljina unesenih stringova */
	if(strlen(T1) > strlen(T2))
	{
		strcpy(D, T1);
		strcpy(K, T2);
	}
	else
	{
		strcpy(D, T2);
		strcpy(K, T1);
	}
	
	/* parsiranje stringa */
	for(i = 0; i <= strlen(D) - strlen(K); i++)
	{
	    iz = 0;
	    for(j = 0; j < strlen(K); j++)
	        if(K[j] == D[i + j])
	            iz++;
	    if(iz == strlen(K))
	        bp++;
    }
    
	printf("Kraci string se u duljem javlja %d puta.\n", bp);
}
