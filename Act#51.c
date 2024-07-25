#include <stdio.h>

int main() {
	int peli, edad;

	printf("\nQue pelicula de estas desea ver?\n 1-DeadpoolxWolverine\n 2-Intensamente\n 3-Blue Lock");
	printf("\n\nMarque el numero que indica la pelicula que desea ver:\n");
	scanf("%d", &peli);
	switch(peli){
		case 1:
			printf("\nOk, vera DeadpoolxWolverine\n");
			printf("\nQue edad tiene usted?\n");
		scanf("%d", &edad);
		if(edad>=18){
			printf("\nsi puede verla ya que tiene la edad requerida, ya le entrego el ticket");
		} else {
			printf("\nusted no puede ir a verla ya que no tiene la edad requerida");
		}
			break;
		case 2:
			printf("\nOk, vera Intensamente, ya le entrego el ticket");
			break;
		case 3:
			printf("\nOk, vera blue Lock, ya le entrego el ticket");
			break;
		default:
			printf("\nEse numero de pelicula no lo tenemos");
			break;
	}
				
	
	return 0;
}
