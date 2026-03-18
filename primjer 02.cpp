/* primjer pokazuje razliku u unosenju stringa sa tastature koristenjem funkcija
   scanf() i gets() */
   
#include<stdio.h>

int main()
{
	char S1[128], S2[128];
	
	printf("Unesi dva ista stringa:\n");
	fflush(stdin);
	scanf("%s", S1);
	fflush(stdin);
	gets(S2);
	
	puts("Uneseni stringovi su:");
	printf(" - pomocu scanf(): %s\n", S1);
	printf(" - pomocu  gets(): %s\n", S2);
}
