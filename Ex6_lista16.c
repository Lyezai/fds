#include <stdio.h>
#include <conio.h>

void main(){
	
//- Criar um Calculador de Tabuadas. 
//O usu�rio dever� digitar o n�mero desejado e o programa dever� fazer a tabuada desse n�mero de zero a 10.
	int valor = 0	 , num = 0, result;

	
	printf("Digite um numero para ver sua tabuada: ");
	scanf("%d",&valor);
	while (num <= 10){
		result = valor * num;
		printf("%d X %d = %d\n",valor, num, result);
		num++;
	}
	
}
