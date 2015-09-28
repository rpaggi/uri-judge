#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main(){
	int r;
	scanf("%d", &r);
	printf("VOLUME = %.3f\n", ((4.0/3) * PI * pow(r, 3.0)));
}
