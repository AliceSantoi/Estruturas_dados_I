#include <stdio.h>
#include <math.h>
#include <locale.h>

void ler_lado();
void calcula_hexagono(float l, float *area, float *perimetro);

int main(){
	setlocale(LC_ALL,"portuguese");
	float lado,a,p;
	
	printf("Digite o valor do lado: ");
	scanf("%f",&lado);
	
	calcula_hexagono(lado,&a,&p);
	
	return(0);
}

void calcula_hexagono(float l, float *area, float *perimetro){

	*area = (3*pow(l,2)*sqrt(3))/2;
	*perimetro = l * 6;
	
	printf("Este � o valor da �rea: %.1f\nEste � o valor do per�metro: %.1f",*area,*perimetro);
}
