#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 50

struct tipo_pessoa{
	int idade;
	float peso;
	char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	tipo_pessoa pes = {0, 0.0, "Texto"};
	
	printf("Valores iniciais \n");
	printf("pes.idade: %d\n", pes.idade);
	printf("pes.peso: %.2f\n", pes.peso);
	printf("pes.nome: %s\n", pes.nome);
	
	pes.idade = 15;
	pes.peso = 94.00;
	strcpy(pes.nome, "Anderson");
		
	printf("\nValores modificados \n");
	printf("pes.idade: %d\n", pes.idade);
	printf("pes.peso: %.2f\n", pes.peso);
	printf("pes.nome: %s\n", pes.nome);
	
	printf("\nInsira sua idade\n");
	scanf("%d", &pes.idade);
	printf("\nInsira seu peso\n");
	scanf("%f", &pes.peso);
	fflush(stdin);
	printf("\nInsira seu nome\n");
	scanf("%[^\n]s", &pes.nome);
	
	printf("\nValores recebidos\n");
	printf("pes.idade: %d\n", pes.idade);
	printf("pes.peso: %.2f\n", pes.peso);
	printf("pes.nome: %s\n", pes.nome);	
}
