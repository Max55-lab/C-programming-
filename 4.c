#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Napisati funkciju koja ispisuje duljinu proslijeðenog stringa (ne koristiti funkcije iz biblioteke). */
int fja(char s[]);
int main(int argc, char *argv[]) {
	char s[50];
	gets (s);
	printf(" %d", fja(s));
}
int fja(char s[]){
	int br=0;
	while(s[br]!='\0'){
		br++;
	}
	return br;
}
