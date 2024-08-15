#include <stdio.h>

int main() {
	char animes[5][30];
	int i = 0;
	
	
	printf("Escribe el nombre de 5 animes:\n");
	while(i < 5){
		printf("\nEscribe un nombre:\n", i + 1);
		scanf("%s", animes[i]);
		i++;
	}
	
	  printf("\nLos animes introducidos son:\n");
    i = 0;
    while (i < 5) {
        printf("%s\n", animes[i]);
        i++;
	}
	
	return 0;
}
