#include <stdio.h>

int main() {
	int pareja, respuesta;

	printf("Va a querer bailar? Ponga 1 si es asi, ponga 2 si no quiere\n");
	scanf("%d", &respuesta);
	if(respuesta==1){
		printf("Con quien quiere bailar?\n");
		printf("Esta el\n Chico#1\n Chico#2\n Chico#3\n");
		scanf("%d", &pareja);
		switch(pareja){
			case 1:
				printf("Ok, ya llamo al chico #1");
				break;
			case 2:
				printf("Ok, ya llamo al chico #2");
				break;
			case 3:
				printf("Ok, ya llamo al chico #3");
				break;
		}
	} else if(respuesta==2){
		printf("Ok, tendra que sustentar la nota con una charla");
	}  else{
		printf("Esa no es una respuesta, diga solamente ponga 1 para Si o 2 para No");
	}
	
	return 0;
}
