#include <stdio.h>
#include <conio.h>

void main(){
	
//- Criar um Calculador de Tabuadas. 
//O usuário deverá digitar o número desejado e o programa deverá fazer a tabuada desse número de zero a 10.
	int valor = 0	 , num = 0, result;

	
	printf("Digite um numero para ver sua tabuada: ");
	scanf("%d",&valor);
	while (num <= 10){
		result = valor * num;
		printf("%d X %d = %d\n",valor, num, result);
		num++;
	}
	
}
