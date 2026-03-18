#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/* Napisati program u kojem korisnik mora upisati neki string
, a program ispisuje koliko se puta u danom stringu pobavlja rijeè "dan".*/

int main(int argc, char *argv[]) {
	char s[50];
	gets(s);
	int i, br=0;
	for(i=0;i<strlen(s);i++){
		if((s[i]=='d'&&s[i+1]=='a'&&s[i+2]=='n')||(s[i]=='D'&&s[i+1]=='A'&&s[i+2]=='N')){
			br++;
		}
	}
	printf("%d",br);
	return 0;
}
