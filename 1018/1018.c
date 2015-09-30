#include <stdio.h>
int main(){
	int v, x, a, b, c, d, e, f, g;
	scanf("%d", &v);
	x=v;
	for(a=0;x>=100;a++){
		x -= 100;
	}
	for(b=0;x>=50;b++){
		x -= 50;
	}
	for(c=0;x>=20;c++){
		x -= 20;
	}
	for(d=0;x>=10;d++){
		x -= 10;
	}
	for(e=0;x>=5;e++){
		x -= 5;
	}
	for(f=0;x>=2;f++){
		x -= 2;
	}
	for(g=0;x>=1;++g){
		x -= 1;
	}
	printf("%d\n", v);
	printf("%d nota(s) de R$ 100,00\n", a);
	printf("%d nota(s) de R$ 50,00\n", b);
	printf("%d nota(s) de R$ 20,00\n", c);
	printf("%d nota(s) de R$ 10,00\n", d);
	printf("%d nota(s) de R$ 5,00\n", e);
	printf("%d nota(s) de R$ 2,00\n", f);
	printf("%d nota(s) de R$ 1,00\n", g);
	return 0;
}