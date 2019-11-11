#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Fun��o que calcula a distancia entre dois pontos
float calculaDistancia(int x1, int y1, int x2, int y2){
	return sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
}
int main(){
	//Defini��o das variaveis
	int x1,y1,x2,y2;
	float distancia;
	
	printf("Informe a coordenadas pra o primeiro ponto:");
	scanf("%i %i", &x1, &y1);
	printf("Informe a coordenadas pra o segundo ponto:");
	scanf("%i %i", &x2, &y2);
	
	//Calcual a distania e mostra o resultado
	distancia = calculaDistancia(x1, y1, x2, y2);
	printf("\n\nDistancia: %.2f \n\n", distancia);
	system("pause");
	return 0;
}