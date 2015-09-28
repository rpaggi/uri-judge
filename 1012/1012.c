#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main(){
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	printf("TRIANGULO: %.3f\n", (a*c)/2);
	printf("CIRCULO: %.3f\n", PI * pow(c, 2));
    printf("TRAPEZIO: %.3f\n", ((a+b)*c)/2);
    printf("QUADRADO: %.3f\n", pow(b, 2));
    printf("RETANGULO: %.3f\n", a*b);
}
