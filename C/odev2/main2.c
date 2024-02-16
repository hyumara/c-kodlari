#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int bosluk=1;
int bas=5;
int ikinci=1;
int son=6;

int main() {
	for(int i =0;i<5;i++){
		for(int b=0;b<bosluk;b++){
			printf(" ");
		}
		for(int a=bas;a>0;a--){
		
		    printf("%d",a)	;
		}
		for (int j=ikinci;j<son;j++)  {
		
		     printf("%d",j); }
	printf("\n");
	bas--;
	son--;
	bosluk++;	     
		}
	}
