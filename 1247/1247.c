#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	double a, b, c, d;
	char buf[100];
	int cont = 1;

	while(cont){
		fgets(buf, sizeof(buf), stdin);
		if(sscanf(buf, "%lf %lf %lf", &a, &b, &c) > 0){
	    	d = sqrt(12 * 12 + a * a);

		    if (12 / b >= d / c)
		    	printf("S\n");
	    	else 
	    		printf("N\n");
	    }else{
	    	cont = 0;
	    }
	}

	return 0;
}