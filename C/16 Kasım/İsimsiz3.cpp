#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){
char cumle[100];
printf("Bir cumle giriniz: ");
gets(cumle);
for (int i=0;i<strlen(cumle);i++){
printf("%c",cumle[i]); 	
	if(cumle[i]==' '){
	   printf("\n");}

  

}
}
