#include "tp0.h"

/* *****************************************************************
 *                     FUNCIONES A COMPLETAR                       *
 *         (ver en tp0.h la documentación de cada función)         *
 * *****************************************************************/

void swap(int *x, int *y) {
	int valor_x = *x;	
	*x = *y;
	*y = valor_x;	
}


int maximo(int vector[], int n) {
	if (n == 0) {
		return -1;
	}
	int pos_max = 0;
	for (int i = 0; i < n; i++) {
		if (vector[i] > vector[pos_max]) {
			pos_max = i;
		}
	}
    return pos_max;
}


int comparar(int vector1[], int n1, int vector2[], int n2) {
	int menor_largo = n1;
	if (n1 > n2) {
		menor_largo = n2;
	}
	for (int i = 0; i < menor_largo; i++) {
		if (vector1[i] < vector2[i]) {
			return -1;
		}
		else if (vector1[i] > vector2[i]) {
			return 1;
		}
	}
	if (n1 < n2 || (n1 == 0 && n1 != n2)) {
		return -1;
	}
	else if (n1 > n2 || (n2 == 0 && n1 != n2)) {
		return 1;
	}
	return 0;
}


void seleccion(int vector[], int n) {
	int pos_max;
	for (int i = n; i > 0; i--) {
		pos_max = maximo(vector, i);
		swap(&vector[pos_max], &vector[i-1]);
	}
}

