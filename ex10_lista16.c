#include <stdio.h>
#include <conio.h>

void main(){
	//10- Escreva um programa que leia o primeiro nome e a altura das mo�as inscritas em um concurso de beleza. 
	//Para cada leitura dever� ser realizado uma pergunta para o usu�rio para parar ou continuar (1 -continuar, 2 - parar).
	// Ao final o programa dever� exibir: a altura da mo�a mais alta e o n�mero de mo�as no concurso. Considere que todas as mo�as possuem altura diferente.
	
	char nome[100];
	float altura, alta = 0;
	int resp = 1, qtde = 0;
	
	while( resp == 1){
		printf("Informe o Nome: ");
		scanf("%s", nome);
		printf("Informe a Altura: ");
		scanf("%f", &altura);
		qtde++;  //incremetar qtd
		if(altura > alta){
			alta = altura;
			
		}
		printf("Deseja contuinuar? (1-Sim; 2-Nao) ");
		scanf("%d", &resp);	
		
	}	
	printf("Qtde de Participantes: %d\n", qtde);
	printf("MAaior altura: %0.f", alta);
	
	
	
}
