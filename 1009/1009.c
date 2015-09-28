#include <stdio.h>
int main(){
	char name[100];
	float s, v;
	scanf("%s %f %f", &name, &s, &v);
	printf("TOTAL = R$ %.2f\n", s+(v*0.15));
}
