#include "stdio.h"
#include "string.h"

int main(int argc, char const *argv[])
{
	char it[1000], dc[1000];

	while(strlen(gets(it)) > 0 && strlen(gets(dc)) > 0){
		int l1 = strlen(it), l2 = strlen(dc), commas, i;
		
		printf("$");

		commas = l1%3;
		if(commas == 0)
			commas = 3;
		for(i = 0; i < l1;i++){
			if(commas == 0){
				printf(",");
				commas = 3;
			}			
			printf("%c", it[i]);
			commas--;
		}

		printf(".");

		if(l2 == 2){
			printf("%s", dc);
		}else{
			if(l2 == 1){
				printf("0%c", dc[0]);			
		}		

		printf("\n");
	}
	return 0;
}