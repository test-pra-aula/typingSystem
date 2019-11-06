#include <stdio.h>
#include <math.h>

float calculaDistancia(int x1, int y1, int x2, int y2){
	return sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
}
int main(){
	int x1, y1, x2, y2;
	
	printf('Digite o valor para ');
	scanf("%d", &x1);
	
	printf('Digite o valor para ');
	scanf("%d", &y1);
	
	printf('Digite o valor para ');
	scanf("%d", &x2);
	
	printf('Digite o valor para ');
	scanf("%d", &y2);
	
	calculaDistancia(x1, y1, x2, y2);
	
	return 0;
}