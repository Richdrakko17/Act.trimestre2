#include <stdio.h>
#include <stdlib.h>

int main() {
    int suma;
    int num1, num2;
    
    printf("Tienes que escribir dos numeros que sumados te den 70, tendras infinitas oportunidades hasta que lo hagas\n");
    
	do {
     printf("\nEscribe el primer numero:\n");
	scanf("%d", &num1);
	
	printf("\nEscribe el segundo numero:\n");
	scanf("%d", & num2);
	suma= num1+num2;
    } while (suma <= 69);
    
    printf("\nLo conseguiste!\n");

    printf("La suma total es %d\n", suma);
    return 0;
}
