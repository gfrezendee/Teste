#include <stdio.h>

int main() {
	
	printf("\n");
	printf("------------------- CALCULADORA DE MEDIA -------------------");
	printf("\n\n");
	
	//-----------------------------------------------------------------------------
	
	float P1, P2, T, MF;
	
	printf("Informe a nota da primeira prova: ");
	scanf("%f",&P1);
	
	printf("Informe a nota da segunda prova: ");
	scanf("%f",&P2);
	
	printf("Informe a nota de trabalho (caso nao houver, coloque 0): ");
	scanf("%f",&T);
	
	//-----------------------------------------------------------------------------
	
	MF=P1+P2+T;
	
	printf("\n");
	printf("Media Final: %.2f", MF);
	printf("\n");
	
	if(MF>=7){
		printf("APROVADO!");
	}else{
		printf("REPROVADO");
	}
	
	
	return 0;
}
