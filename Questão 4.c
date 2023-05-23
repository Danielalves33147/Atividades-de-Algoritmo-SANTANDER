#include <stdio.h>
#include <stdlib.h>

int main(){
int i=0;
float valor,saldo=1000,poupanca=500;


while(i != 3){
	printf("Digite 1 para APLICAR, 2 para RESGATAR e 3 para SAIR: ");
	scanf("%i",&i);
	
	if(i == 1){
		printf("Valor da Aplicação: ");
		scanf("%f",&valor);
		
		if(valor>saldo){
		printf("Saldo de conta corrente insuficiente\n");
	}else{
		saldo = saldo - valor;
		poupanca = poupanca + valor;
		printf("Aplicação realizada com sucesso\n");
	}
	
	}else if(i == 2){
		printf("Valor do resgate: ");
		scanf("%f",&valor);
		
		if(valor>poupanca){
		printf("Saldo de poupanca insuficiente\n");
		
	}else{
		saldo = saldo + valor;
		poupanca = poupanca - valor;
		printf("Resgate realizado com sucesso\n");
	}
		
	}else{
		printf("Até logo");
	}
}
	return 0;
}
