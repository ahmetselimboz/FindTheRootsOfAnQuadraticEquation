#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float root1(float a, float b, float c) {

	float discriminant1 = (pow(b, 2) - (4 * a * c));
	float x1 = -1 * ((b - sqrt(discriminant1)) / 2 * a);
	return x1;
}

float root2(float a, float b, float c) {

	float discriminant2 = (pow(b, 2) - (4 * a * c));
	float x2 = -1 * ((b + sqrt(discriminant2)) / 2 * a);
	return x2;
}


int main() {
	float n1, n2, n3;

	printf("-----FIND THE ROOTS OF AN QUADRATIC EQUATION-----\n\n");
	printf("--> Enter the coefficient of the term x^2: ");
	scanf_s("%f", &n1);
	printf("--> Enter the coefficient of the term x: ");
	scanf_s("%f", &n2);
	printf("--> Enter the coefficient of the fixed term: ");
	scanf_s("%f", &n3);

	printf("--> X1: %.2f\n", root1(n1,n2,n3));
	printf("--> X2: %.2f\n", root2(n1,n2,n3));

	system("pause");
}