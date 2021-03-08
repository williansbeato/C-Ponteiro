#include <stdio.h>
#include <stdlib.h>

int main(){

	int tam1, tam2, tam3,i, j,a;
	char *pont_tam1, *pont_tam2, *pont_tam3;


	printf("\nDigite o tamanho: ");
	scanf(" %i", &tam1);

	pont_tam1 = malloc(tam1 * sizeof(char));
	pont_tam2= malloc(tam1 * sizeof(char));;
	
	printf("\nDigite a palavra: ");
	__fpurge(stdin);
	gets(pont_tam1);


   for(i=0, j=tam1-1; pont_tam1[i]!='\0'; i++, j--){
        pont_tam2[i]=pont_tam1[j];
    }


	printf("\n- Invertida = %s", pont_tam2);

	printf("\n\n");

return 0;
}