#include <stdio.h>
#include <stdlib.h>

#define texto "Entrada e saida de dados."

int main(){
	
	printf("%s\n", texto);
	
	int idade = 0;
	float altura = 0.0;
	char nome[50] = "";
	
	printf("Digite sua idade:\n");
	scanf("%d", &idade);
	printf("\n");
	
	printf("Digite sua altura:\n");
	scanf("%f", &altura);
	printf("\n");
	
	printf("Digite seu nome:\n");
	scanf("%[^\n]s", nome);
	printf("\n");
	
	printf("Dados Informados: \n");
	printf("\n");
	printf("Idade: %d. \n",idade);
	printf("Altura: %.2f. \n",altura);
	printf("Nome: %s. \n",nome);

	system("pause");
}
