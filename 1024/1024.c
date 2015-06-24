#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int n, i;
	scanf("%d", &n);
	char a;
	gets(&a);

	for(i = 0; i< n;i++){
		char str[1000];
		gets(str);
		int len = strlen(str), j, k = len;

		for(j = 0; j < len; j++){
			if((str[j] >= 'a' && str[j] <= 'z' ) || (str[j] >= 'A' && str[j] <= 'Z' ))
				str[j] += 3;
		}

		char rts[len+1];
		rts[k] = '\0';
		k--;
		for(j = 0; j < len; j++){
			rts[k] = str[j];
			k--;
		}

		for(j = len/2; j < len; j++){
			rts[j] -= 1;
		}

		puts(rts);
	}
	return 0;
}