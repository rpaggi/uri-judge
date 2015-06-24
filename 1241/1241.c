#include "stdio.h"
#include "string.h"

int main(int argc, char const *argv[])
{
	int c, i;
	scanf("%d", &c);

	for(i = 0;i<c;i++){
		char s1[1000], s2[1000];

		scanf("%s", s1);
		scanf("%s", s2);

		int e = 1, l1 = strlen(s1), l2 = strlen(s2), j, k = l1-1;

		if(l2 > l1){
			e = 0;
		}else{
			for(j = l2-1; j >= 0; j--){
				if(s1[k] != s2[j]){
					e = 0;
					j = 0;
				}
				k--;
			}
		}

		if(e == 1)
			printf("encaixa\n");
		else
			printf("nao encaixa\n");
	}
	
	return 0;
}