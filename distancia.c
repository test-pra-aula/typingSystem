#include <stdio.h>
#include <math.h>

//Função que calcula a distancia entre dois pontos
float calculaDistancia(int x1, int y1, int x2, int y2){
	return sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
}
int main(){
	//Definição das variaveis
	int x1,y1,x2,y2;
	float distancia;
	
	printf("Informe a coordenadas pra o primeiro ponto:");
	scanf("%i %i", &x1, &y1);
	printf("Informe a coordenadas pra o segundo ponto:");
	scanf("%i %i", &x2, &y2);
	
	//Calcual a distania entre dois pontos
	distancia = calculaDistancia(x1, y1, x2, y2);
	
	//Mostra o resultado
	printf("\n\nDistancia: %f \n\n", distancia);
	
	return 0;
}