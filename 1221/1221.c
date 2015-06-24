#include <stdio.h>
#include <math.h>

int main(){
	int casos, n, i, j, p;

	scanf("%d",&casos);

	for(i = 0; i < casos; i++){
		scanf("%d",&n);

		p = 1;
		if(n == 2)
			p = 1;
		else	
  			if (n % 2 == 0)
    			p = 0;
    		else{ 
  				int max = sqrt(n);

  				for (j = 3; j < max; j += 2)
    				if (n % j == 0)
      					p = 0;
      		}

		if(p == 1)
			printf("Prime\n");
		else
			printf("Not Prime\n");
	}

	return 0;
}