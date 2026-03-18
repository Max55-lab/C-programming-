#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 3

/* Napisati program u kojem se inicijalizira niz od 10 struktura tipa
vozilo {
	char tip[20];
	int starost;
	float snaga;
} 

Program ispisuje tipove svih vozila po abecednom redu, te dodatno, snagu i tip najnovijeg vozila.
*/
struct vozilo{
	char tip[20];
	int starost;
	float snaga;
	
};

int main(int argc, char *argv[]) {
	struct vozilo d[N],pom,max;
	int i,j;
	for(i=0;i<N;i++){
		scanf("%s %d %f", d[i].tip,&d[i].starost,&d[i].snaga);
	}
	for(i=0;i<N;i++){
		for(j=i+1;j<N;j++){
			if(strcmp(d[i].tip,d[j].tip)>0){
				pom=d[i];
				d[i]=d[j];
				d[j]=pom;
			}
		} 
	}for(i=0;i<N;i++){
	printf("%s\n",d[i].tip);
	}
	max=d[0];
	for(i=0;i<N;i++){
		if(max.starost<d[i].starost){
			max=d[i];
		}
	} printf("Najstarije vozilo je %s i ima snagu %f", max.tip,max.snaga);
	return 0;
}
