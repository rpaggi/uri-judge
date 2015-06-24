#include <stdio.h>
#include <math.h>

int main(){
	int casos, i;

	scanf("%d",&casos);

	for(i = 0; i < casos; i++){
		int n;
		scanf("%d", &n);

		int notas[n], j, media = 0;
		for(j = 0;j<n;j++){
			scanf("%d", &notas[j]);
			media += notas[j];
		}

		int cont = 0;
		for(j = 0;j<n;j++){
			if(notas[j] * n > media){
				cont ++;
			}
		}


		printf("%.3f%\n", (100.00*cont)/n);

	}

	return 0;
}