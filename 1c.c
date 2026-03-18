#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define N 3

/* Napišite program koji uèitava 3 karaktera koji se na ekranu ispisuje redom po abecedi! */

int main(int argc, char *argv[]) {
	char s[3], pom;
	int i,j;
	for(i=0;i<N;i++){
		scanf(" %c", &s[i]);
	}
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(s[i]>s[j]){
			pom=s[i];
			s[i]=s[j];
			s[j]=pom;
			}
		}
	} 
	for(i=0;i<N;i++){
	printf ("%c", s[i]);
}
	return 0;
}
