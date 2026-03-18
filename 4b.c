#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 5

/* Napišite program koji uèitava 5 stringova i ispisuje onaj string koji je leksièki iza ostalih!*/

int main(int argc, char *argv[]) {
	char s[N][256], pom[256];
	int i,j;
	for(i=0;i<N;i++){
		gets(s[i]);
	}
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(strcmp(s[i],s[j])>0){
				strcpy(pom,s[j]);
				strcpy(s[j],s[i]);
				strcpy(s[i],pom);
			}
		}
	}printf("%s", s[0]);
	return 0;
}
