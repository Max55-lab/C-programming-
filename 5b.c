#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 5

/*Napisati program u kojem se inicijalizira niz stringova, a program ispisuje najdulji string.
 Ako dva ili više stringova imaju istu duljinu, ispisuje se prvi po abecednom redu. */

int main(int argc, char *argv[]) {
	char s[N][50], najdulji[50],pom[50];
	int i,j, kontrola=1;
	for(i=0;i<N;i++){
		gets(s[i]);
	}
	int max_dug;
	max_dug=strlen(s[0]);
	for(i=0;i<N;i++){
		if(max_dug<strlen(s[i])){
			max_dug=strlen(s[i]);
			strcpy(najdulji,s[i]);
		}
	}
	for(i=0;i<N;i++){
		if(max_dug==strlen(s[i])){
			for(i=0;i<N;i++){
				for(j=i+1;j<N;j++){
					if(strcmp(s[i],s[j])>0){
						strcpy(pom,s[i]);
						strcpy(s[i],s[j]);
						strcpy(s[j],pom);
						kontrola=0;
					}
				}
			}
		}
	}if(kontrola==0){
		printf("%s", s[j]);
	}else printf("%s",najdulji);
	return 0;
}
