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
		int len = strlen(str), j, k = len/2, l = len;

		char strOK[len];
		strOK[len] = '\0';
		for(j = 0;j < len;j++){
			if(j < len/2){
				if(k > 0)
					strOK[j] = str[k-1];
				k--;
			}else{
				strOK[j] = str[l-1];
				l--;
			}
		}

		puts(strOK);
	}
	return 0;
}