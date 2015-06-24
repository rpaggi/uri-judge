#include <stdio.h>

int main(){
    int n = 1;

    while (n != 0){
    	scanf("%d", &n);

        int i, sum = 0;
        for (i = 1; i <= n; i++){
            sum += i * i;
        }
        
        if(sum>0)
        	printf("%d\n", sum);
    }
    return 0;
}