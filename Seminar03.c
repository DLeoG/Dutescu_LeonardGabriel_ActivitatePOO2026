#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	printf("Introduceti un numar real: ");
	float variabila = 0.0;
	scanf("%f", &variabila);
	printf("Ai introdus: %5.2f", variabila);
}
