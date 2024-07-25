#include <stdio.h>

int main() {
   int menu;
   printf("Estos son los menus:\n 1-Pollo frito con papas\n 2-Pollo frito con pure de papas\n 3-Pollo frito con pansito\n");
   printf("\nCual desea ordenar? Escoja un numero\n");
   scanf("%d", &menu);
   switch(menu){
   case 1:
   	printf("\nOK, El combo cuesta 5.99");
   	break;
   case 2:
   	printf("\nOK, El combo cuesta 6.99");
   	break;
   case 3:
   	printf("\nOK, El combo cuesta 5.99");
   	break;
	}
   
    return 0;
}
