#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, i, j;
	while(scanf("%d", &n) && n){
		int k = n/2, l=1, m;

		for(i = 0; i < (n/2+1);i++, k--){
			for(j = 0;j < k; j++){
				printf(" ");
			}
			for(m = 0;m < l;m++){
				printf("*");
			}
			l+=2;
			printf("\n");
		}
		k = n/2;
		for(j = 0;j < k; j++){
			printf(" ");
		}
		printf("*\n");
		k = n/2-1;
		for(j = 0;j < k; j++){
			printf(" ");
		}
		printf("***\n");

		printf("\n");
	}
	return 0;
}