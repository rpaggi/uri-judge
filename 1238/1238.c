#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int n, i;
	scanf("%d", &n);

	for(i = 0; i< n;i++){
		char str1[1000], str2[1000];
		scanf("%s", str1);
		scanf("%s", str2);

		int l1 = strlen(str1),  l2 = strlen(str2), len = l1+l2, j = 0, k = 0, l = 0;
		char sout[len];

		while(j < len){
			if(k < l1){
				sout[j] = str1[k];
				k++;
				j++;
			}
			if(l < l2){
				sout[j] = str2[l];
				l++;
				j++;
			}
		}

		sout[len] = '\0';

		puts(sout);
	}
	return 0;
}