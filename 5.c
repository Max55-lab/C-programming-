#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 5

/*	Napisati program u kojem se inicijalizira niz stringova, a program ispisuje najdulji string. 
Ako dva ili više stringova imaju istu duljinu, ispisuje se prvi po abecednom redu. */

int main(int argc, char *argv[]) {
	char s[N][50],pom[50], najdulji[50];
	int i,j;
	
	for(i=0;i<N;i++){
		gets(s[i]);
	}
	for(i=0;i<N;i++){
		if(strlen(s[i])>strlen (s[i+1]){
			strcpy(najdulji,s[i]);
			
		}else strcpy(najdulji,s[i+1]);
		if(strlen (s[i])==strlen(s[i+1])){
			for(i=0;i<N;i++){
				for(j=i+1;i<N;i++){
					strcpy(pom,s[i]);
					strcpy(s[i],s[i+1]);
					strcpy(s[i+1],pom);
				}
			}
		}
	}
	printf("Najdulji je %s",najdulji);
	printf("Po abecedi je %s",s[0]);
	return 0;
}
