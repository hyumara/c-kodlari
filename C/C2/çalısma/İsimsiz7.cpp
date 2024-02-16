#include <stdio.h>
#include <conio.h>
#include <string.h>
main(){
	char dizi[]={4,8,5,9,44,43,78,7,3,9,54};
	char tek[50];
	char cift[50];
	int b=0;
	int y=0;
	for(int i=0;i<strlen(dizi);i++)
	  if(dizi[i]<10){
	    tek[b]=dizi[i];
	     b++;
	 }
	  else{
	  	cift[y]=dizi[i];
	  	y++;
	
	  }
   
    for(int j=0;j<strlen(tek);j++)
	 printf("%d ",tek[j]); 
	 
	printf("\n");
    for(int a=0;a<strlen(cift);a++)
	 printf("%d ",cift[a]);  
   
}
