#include <stdio.h>
#include <stdlib.h>

float quad(float a, float b, float c, float x){
        float y;
        return a*x*x + b*x + c;
}

int main(){
	float imagens[100], dominio;
	int indice;
	for(dominio = -25.0, indice=0;
	dominio<=25.0;
	dominio = dominio+0.5, indice++){
		imagens[indice] = quad(2.0, 3.5, 2.1, dominio);
	}

	int i;
	for (i=0; i<100; i++) printf("%f\n", imagens[i]);

	return 0;
}
