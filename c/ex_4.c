 #include <stdio.h>
 
 int main(){
 	int A, B, soma, sub, mult, div;
 	
 	printf("Digite um numero: \n");
 	scanf("%d", &A);
 	printf("Digite outro numero: \n");
 	scanf("%d", &B);
 	printf("\n");
 	
 	soma = A + B;
 	sub = A - B;
 	mult = A * B;
 	div = A / B;
 	
 	printf("Resultados: \n");
 	printf("\n");
 	printf("Soma: %d \n", soma);
 	printf("Subt.: %d \n", sub);
 	printf("Multi.: %d \n", mult);
 	printf("Div.: %d \n", div);
 }
