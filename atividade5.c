#include <stdio.h>
#include <stdlib.h>

int main(){

	int tam1, tam2, tam3,i, j,a;
	char *pont_tam1, *pont_tam2, *pont_tam3;


	printf("\nDigite o tamanho: ");
	scanf(" %i", &tam1);

	pont_tam1 = malloc(tam1 * sizeof(char));

	printf("\nDigite a palavra: ");
	__fpurge(stdin);
	gets(pont_tam1);

	printf("\n -Posicoes Impares: ");

   for(i=0; pont_tam1[i]!='\0'; i++){
      j=i%2;
      if(j==1){
          printf("%c", pont_tam1[i]);
      }
    }


	printf("\n\n");

return 0;
}