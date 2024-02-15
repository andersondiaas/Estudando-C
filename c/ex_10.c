#include <stdio.h>

int main(){
	
	char s[20];
	
	printf("Digite Algo: \n");
	scanf("%19[^\n]s", s);
	fflush(stdin);
	
	printf("Resultado: %s\n\n", s);
	
}
