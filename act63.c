#include <stdio.h>


int main() {
	int num;
	
	printf("Cual es el resultado de 5 elevado al 3?(5^3)\n");
	
	do {
		printf("\nIntroduce el resultado correcto\n");
		scanf("%d", &num);
	} while(num != 125);
	
	printf("Perfecto el resultado es: %d", num);
	
	return 0;
}
