#include <stdio.h>
#include <stdlib.h>

int main() {
	int numeros[50], ordenVector, elemento, izquierda, derecha, centro, bandera;

	printf("Ingrese orden del vector: ");
	scanf("%d", &ordenVector);
	printf("\nINGRESE ELEMENTOS DE MENOR A MAYOR\n");
	for(int i = 0; i < ordenVector; i++) {
		printf("Ingrese Elemento [%d]: ", i);
		scanf("%d", &numeros[i]);
	}
	
	system("cls");

	printf("Ingrese el elemento que desea buscar: ");
	scanf("%d", &elemento);
	
	izquierda = 0;
	derecha = ordenVector - 1;
	bandera = 0;

	while(izquierda <= derecha && bandera == 0) {
		centro = (izquierda + derecha) / 2;
		if(numeros[centro] == elemento) {
			bandera = 1;
		} else {
			if(elemento > numeros[centro]){
				izquierda = centro + 1;
			}else{
				derecha = centro - 1;
			}
		}
	}
	
	
	if(bandera == 1){
		printf("\nEl elemento %d se encontro en numeros[%d]", elemento, centro);
	}else{
		printf("\nNo se encontro el elemento %d", elemento);
	}
	return (0);
}