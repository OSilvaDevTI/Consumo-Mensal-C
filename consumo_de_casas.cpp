#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.c>
#include <string.h>

//variavel global
float media = 0;

float calcularMedia(float consumo[], int qtCasa)
{
	
	for (int i = 1; i <= qtCasa; i++)
	{
		media += consumo[i] / qtCasa;
	}
	
	printf("\nConsumo medio: %.1f", media);
	return media;
}

int acimaDaMedia(float consumo[], int qtCasa, float media)
{
	int contar = 0; 
	
	for (int i = 1; i <= qtCasa; i++)
	{
		if (consumo[i] > media)
			contar++;
	}
	
	printf("\nNumero de casas que ficaram acima da media: %d", contar);
}

float maiorConsumo(float consumo[], int qtCasa)
{
	float maior = 0.01;
	
	for (int i = 1; i <= qtCasa; i++)
	{
		if (consumo[i] > maior)
			maior = consumo[i];
	}
	
	printf("\nMaior consumo: %.1f", maior);
	return maior;
}

float menorConsumo(float consumo[], int qtCasa)
{
	float menor;
	
	for (int i = 1; i <= qtCasa; i++)
	{
		if (consumo[i] < menor)
			menor = consumo[i];
	}
	
	printf("\nMenor consumo: %.1f", menor);
	return menor;
}

void lerConsumo(float consumo[], int qtCasa)
{	
	for (int i = 1; i <= qtCasa; i++)
	{
		while(consumo[i] < 0.01)
		{
		printf("Digite o consumo da residencia %d (Valor acima de 0): ", i);
		scanf("%f", &consumo[i]);
		}
	}
}

int main(){
	
	int qtResidencia;
	
	do{
		printf("Digite a quantidades de casas que serao analisadas: ");
		scanf("%d", &qtResidencia);
	} while (qtResidencia > 50);
	
	float consumokWh[qtResidencia];
	
	lerConsumo(consumokWh, qtResidencia);
	calcularMedia(consumokWh, qtResidencia);
	maiorConsumo(consumokWh, qtResidencia);
	menorConsumo(consumokWh, qtResidencia);
	acimaDaMedia(consumokWh, qtResidencia, media);
	
	return 0;
}
