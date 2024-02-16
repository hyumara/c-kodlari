#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bas=1;
son=8;
bosluk=0;
int i=0;
bas2=7;
son2=0;
bosluk2=0;
int main() {
	for(int a=0;a<4;a++){
		for (int a=0;a<bosluk;a++){
			printf(" ");
			
		}
		bosluk++;
		for(int b=bas;b<son;b++){
			printf("%d",b);
		}
		bas++;
		son--;
		printf("\n");
	}
	for(int c=0;c<4;c++){
		for (int c=0;c<bosluk2;c++){
			printf(" ");
			
		}
		bosluk2++;
		for(int n=bas2;n>son2;n--){
			printf("%d",n);
		}
		bas2--;
		son2++;
		printf("\n");
	
}}
