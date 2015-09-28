#include <stdio.h>
#include <math.h>
int main(){
	int a, b, c, ab, bc;
	scanf("%d %d %d", &a, &b, &c);
	ab = (a + b + abs(a-b))/2;
	bc = (ab + c + abs(ab-c))/2;
    printf("%d eh o maior\n", bc);
}
