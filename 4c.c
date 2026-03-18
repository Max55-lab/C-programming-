#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 5

/* Napišite program koji uèitava 5 stringova i ispisuje onaj string koji je leksièki ispred ostalih! */

int main(int argc, char *argv[]) {
	char s[N][50],pom[50];
	int i,j;
	
	for(i=0;i<N;i++){
		gets(s[i]);
	}
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(strcmp(s[i],s[j])>0){
				strcpy(pom,s[i]);
				strcpy(s[i],s[j]);
				strcpy(s[j],pom);
			}
	}
		}
		printf("%s",s[0]);
	return 0;
}
