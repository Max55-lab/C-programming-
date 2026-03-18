/* progra definira strukturu Nogometas ca clanovima prezime_ime, 
   reprezentacija i broj postignutih golova, inicijalizira niz od 5 
   Nogometasa i u posebnoj funkciji pronalazi najboljeg strijelca
   te njegove podatke ispisuje u glavnom programu */

#include <stdio.h>

struct Nogometas
{
	char prezime_ime[30];
	char reprezentacija[20];
	int golovi;
};

struct Nogometas NajboljiStrijelac(struct Nogometas N[5]);

void main()
{
	int i;
	struct Nogometas N[5] = {{"Lionel Messi", "Argentina", 4}, 
	                         {"Cristiano Ronaldo", "Portugal", 5}, 
							 {"Luis Suarez", "Urugvaj", 5}, 
	                         {"Edin Dzeko", "Bosna i Hercegovina", 10}, 
	                         {"Mario Mandzukic", "Hrvatska", 10}}, NS;

	NS = NajboljiStrijelac(N);
	printf("Najbolji strijelac prvenstva je %s (%s) sa %d golova.\n", 
		NS.prezime_ime, NS.reprezentacija, NS.golovi);
}

struct Nogometas NajboljiStrijelac(struct Nogometas N[5])
{
	struct Nogometas Strijelac;
	int i;

	Strijelac = N[0];
	for(i = 0; i < 5; i++)
		if(Strijelac.golovi <= N[i].golovi)
			Strijelac = N[i];
	return Strijelac;
}
