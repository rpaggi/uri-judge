#include <stdio.h>
int main(){
	int i, c, q;
	float v, vt;
	for(i=0;i<2;i++){
		scanf("%d %d %f", &c, &q, &v);
		vt+=(v * q);
	}
	printf("VALOR A PAGAR: R$ %.2f\n", vt);
}
