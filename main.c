#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int historial[100][5], contador, resultadoanterior;

void guardarHistorial(na, nb, tipo) {
	
	int a;
	
	for ( a = 0; a < contador; a ++ ) {
		
		if ( historial[a][0] == 0 ) {
		
			historial[a][0] = na;
			historial[a][1] = nb;
			historial[a][2] = tipo;
			
		}
		
	}
	
}

void verHistorial() {
	
	int a;
	
	for ( a = 0; a < contador; a ++ ) {
		
		switch (historial[a][2]) {
			
			case 1: printf("\n %d) %d + %d = %d \n ", a + 1, historial[a][0], historial[a][1], historial[a][0] + historial[a][1]);
				break;
			
			case 2: printf("\n %d) %d - %d = %d \n ", a + 1, historial[a][0], historial[a][1], historial[a][0] - historial[a][1]);
				break;
			
			case 3: printf("\n %d) %d x %d = %d \n ", a + 1, historial[a][0], historial[a][1], historial[a][0] * historial[a][1]);
				break;
			
			case 4: printf("\n %d) %d / %d = %d \n ", a + 1, historial[a][0], historial[a][1], historial[a][0] / historial[a][1]);
				break;
				
			case 5: printf("\n %d) Raiz cuadrada de %d (%.2f) \n ", a + 1, historial[a][0], sqrt(historial[a][0]));
				break;
			
			case 6: printf("\n %d) %d elevado a la %d = %.2f \n ", a + 1, historial[a][0], historial[a][1], pow(historial[a][0], historial[a][1]));
				break;
			
			case 7: printf("\n %d) El seno de %d = %.2f \n ", a + 1, historial[a][0], sin(historial[a][0] * 3.14159 / 180));
				break;
			
		}
		
	}
	
	printf("\n Presione cualquier tecla para continuar");
	getch();
	system("cls");
	mostrarMenu();
	
}

int main(int argc, char *argv[]) {
	
	mostrarMenu();
	
	return 0;
	
}

void mostrarMenu() {
	
	int opcionmenu = 0;
		
	printf( "\n   >>> MENU <<<" );
    printf( "\n \n   1. Suma." );
    printf( "\n   2. Resta." );
    printf( "\n   3. Multiplicacion." );
    printf( "\n   4. Division." );
    printf( "\n   5. Raiz cuadrada." );
    printf( "\n   6. Potencia.");
    printf( "\n   7. Seno" );
    printf( "\n   8. Coseno" );
    printf( "\n   9. Tangente" );
    printf( "\n   10. Ver historial" );
    printf( "\n   11. Salir. \n \n" );
		
	scanf("%d", &opcionmenu);
		
		switch ( opcionmenu ) {
			
			case 1: fsuma();
				break;
			
			case 2: fresta();
				break;
			
			case 3: fmulti();
				break;
			
			case 4: fdivi();
				break;
				
			case 5: fraiz();
				break;
				
			case 6: fpoten();
				break;
				
			case 7: fsen();
				break;
			
			case 8: fcos();
				break;
				
			case 9: ftan();
				break;
			
			case 10: verHistorial();
				break;
            
            case 11: break;
            
            default: system("cls");
				printf("Opcion incorrecta");
				printf("Presione cualquier tecla para continuar");
				getch();
				system("cls");
				mostrarMenu();
				break;
	}
	
}

void fsuma() {
	
	system("cls");
	
	int numeroa, numerob, opcion;
	
	if ( resultadoanterior == 0 ) {
		
		printf("\n Ingrese el primer numero que desea sumar \n");
		scanf("%d", &numeroa);
		
		if ( numeroa == 0 ) {
			
			printf(" \n No esta permitido realizar operaciones con el 0");
			printf(" \n Presione cualquier tecla para continuar");
			getch();
			fsuma();
			
		}
		
		printf("\n Ingrese el segundo numero que desea sumar \n");
		
	} else {
		
		numeroa = resultadoanterior;
		
		printf("\n Ingrese el segundo numero que desea sumar (El primero es el resultado anterior: %d) \n", resultadoanterior);
		
	}
		
		scanf("%d", &numerob);
		
		if ( numerob == 0 ) {
			
			printf(" \n No esta permitido realizar operaciones con el 0");
			printf(" \n Presione cualquier tecla para continuar");
			getch();
			fsuma();
			
		}
	
		printf("\n %d + %d = %d \n", numeroa, numerob, numeroa + numerob);
		
		contador++;
		guardarHistorial(numeroa, numerob, 1);
		
		printf( "\n   1. Guardar resultado para la proxima operacion \n" );
	    printf( "\n   2. Volver al menu \n" );
		scanf("%d", &opcion);
		
		if ( opcion == 1 ) {
		
			resultadoanterior = numeroa + numerob;	
			system("cls");
			mostrarMenu();
			
		}	else if ( opcion == 2 ) {
			
			resultadoanterior = 0;
			system("cls");
			mostrarMenu();
			
		}
	
}

void fresta() {
	
	system("cls");
	
	int numeroa, numerob, opcion;
	
	if ( resultadoanterior == 0 ) {
		
		printf("\n Ingrese el primer numero que desea restar \n");
		scanf("%d", &numeroa);
		
		if ( numeroa == 0 ) {
			
			printf(" \n No esta permitido realizar operaciones con el 0");
			printf(" \n Presione cualquier tecla para continuar");
			getch();
			fresta();
			
		}
		
		printf("\n Ingrese el segundo numero que desea restar \n");
		
	} else {
		
		numeroa = resultadoanterior;
		
		printf("\n Ingrese el segundo numero que desea restar (El primero es el resultado anterior: %d) \n", resultadoanterior);
		
	}
		
		scanf("%d", &numerob);
		
		if ( numerob == 0 ) {
			
			printf(" \n No esta permitido realizar operaciones con el 0");
			printf(" \n Presione cualquier tecla para continuar");
			getch();
			fresta();
			
		}
	
		printf("\n %d - %d = %d \n", numeroa, numerob, numeroa - numerob);
		
		contador++;
		guardarHistorial(numeroa, numerob, 2);
		
		printf( "\n   1. Guardar resultado para la proxima operacion \n" );
	    printf( "\n   2. Volver al menu \n" );
		scanf("%d", &opcion);
		
		if ( opcion == 1 ) {
		
			resultadoanterior = numeroa - numerob;	
			system("cls");
			mostrarMenu();
			
		}	else if ( opcion == 2 ) {
			
			resultadoanterior = 0;
			system("cls");
			mostrarMenu();
			
		}
	
}

void fmulti() {
	
	system("cls");
	
	int numeroa, numerob, opcion;
	
	if ( resultadoanterior == 0 ) {
		
		printf("\n Ingrese el primer numero que desea multiplicar \n");
		scanf("%d", &numeroa);
		
		if ( numeroa == 0 ) {
			
			printf(" \n No esta permitido realizar operaciones con el 0");
			printf(" \n Presione cualquier tecla para continuar");
			getch();
			fmulti();
			
		}
		
		printf("\n Ingrese el segundo numero que desea multiplicar \n");
		
	} else {
		
		numeroa = resultadoanterior;
		
		printf("\n Ingrese el segundo numero que desea multiplicar (El primero es el resultado anterior: %d) \n", resultadoanterior);
		
	}
		
		scanf("%d", &numerob);
		
		if ( numerob == 0 ) {
			
			printf(" \n No esta permitido realizar operaciones con el 0");
			printf(" \n Presione cualquier tecla para continuar");
			getch();
			fmulti();
			
		}
	
		printf("\n %d x %d = %d \n", numeroa, numerob, numeroa * numerob);
		
		contador++;
		guardarHistorial(numeroa, numerob, 3);
		
		printf( "\n   1. Guardar resultado para la proxima operacion \n" );
	    printf( "\n   2. Volver al menu \n" );
		scanf("%d", &opcion);
		
		if ( opcion == 1 ) {
		
			resultadoanterior = numeroa * numerob;
			system("cls");
			mostrarMenu();
			
		}	else if ( opcion == 2 ) {
			
			resultadoanterior = 0;
			system("cls");
			mostrarMenu();
			
		}
	
}

void fdivi() {
	
	system("cls");
	
	int numeroa, numerob, opcion;
	
	if ( resultadoanterior == 0 ) {
		
		printf("\n Ingrese el primer numero que desea dividir \n");
		scanf("%d", &numeroa);
		
		if ( numeroa == 0 ) {
			
			printf(" \n No esta permitido realizar operaciones con el 0");
			printf(" \n Presione cualquier tecla para continuar");
			getch();
			fdivi();
			
		}
		
		printf("\n Ingrese el segundo numero que desea dividir \n");
		
	} else {
		
		numeroa = resultadoanterior;
		
		printf("\n Ingrese el segundo numero que desea dividir (El primero es el resultado anterior: %d) \n", resultadoanterior);
		
	}
		
		scanf("%d", &numerob);
		
		if ( numerob == 0 ) {
			
			printf(" \n No esta permitido realizar operaciones con el 0");
			printf(" \n Presione cualquier tecla para continuar");
			getch();
			fdivi();
			
		}
	
		printf("\n %d / %d = %d el resto es: %d \n", numeroa, numerob, numeroa / numerob, numeroa % numerob);
		
		contador++;
		guardarHistorial(numeroa, numerob, 4);
		
		printf( "\n   1. Guardar resultado para la proxima operacion \n" );
	    printf( "\n   2. Volver al menu \n" );
		scanf("%d", &opcion);
		
		if ( opcion == 1 ) {
		
			resultadoanterior = numeroa / numerob;
			system("cls");
			mostrarMenu();
			
		}	else if ( opcion == 2 ) {
			
			resultadoanterior = 0;
			system("cls");
			mostrarMenu();
			
		}
	
}

void fraiz() {
	
	system("cls");
	
	int numeroa, numerob, opcion;
	
	if ( resultadoanterior == 0 ) {
		
		printf("\n Ingrese un numero para hacer su raiz cuadrada \n");
		scanf("%d", &numeroa);
		
		if ( numeroa == 0 ) {
			
			printf(" \n No esta permitido realizar operaciones con el 0");
			printf(" \n Presione cualquier tecla para continuar");
			getch();
			fraiz();
			
		}
		
	} else {
		
		numeroa = resultadoanterior;
		
	}
	
		printf("\n La raiz cuadrada de %d  es: %.2f \n", numeroa, sqrt(numeroa) );
		
		contador++;
		guardarHistorial(numeroa, numerob, 5);
		
		printf( "\n   1. Guardar resultado para la proxima operacion \n" );
	    printf( "\n   2. Volver al menu \n" );
		scanf("%d", &opcion);
		
		if ( opcion == 1 ) {
			
			double a = sqrt(numeroa);
		
			resultadoanterior = a;
			system("cls");
			mostrarMenu();
			
		}	else if ( opcion == 2 ) {
			
			resultadoanterior = 0;
			system("cls");
			mostrarMenu();
			
		}
	
}

void fpoten() {
	
	system("cls");
	
	int numeroa, numerob, opcion;
	
	if ( resultadoanterior == 0 ) {
		
		printf("\n Ingrese el numero que desea elevar \n");
		scanf("%d", &numeroa);
		
		if ( numeroa == 0 ) {
			
			printf(" \n No esta permitido realizar operaciones con el 0");
			printf(" \n Presione cualquier tecla para continuar");
			getch();
			fpoten();
			
		}
		
		printf("\n Ingrese el numero de la potencia \n");
		
	} else {
		
		numeroa = resultadoanterior;
		
		printf("\n Ingrese el numero de la potencia (El numero elevado es el resultado anterior: %d) \n", resultadoanterior);
		
	}
		
		scanf("%d", &numerob);
		
		if ( numerob == 0 ) {
			
			printf(" \n No esta permitido realizar operaciones con el 0");
			printf(" \n Presione cualquier tecla para continuar");
			getch();
			fpoten();
			
		}
	
		printf("\n %d elevado a la %d = %.2f \n", numeroa, numerob, pow(numeroa, numerob));
		
		contador++;
		guardarHistorial(numeroa, numerob, 6);
		
		printf( "\n   1. Guardar resultado para la proxima operacion \n" );
	    printf( "\n   2. Volver al menu \n" );
		scanf("%d", &opcion);
		
		if ( opcion == 1 ) {
			
			double a = pow(numeroa, numerob);
		
			resultadoanterior = a;
			system("cls");
			mostrarMenu();
			
		}	else if ( opcion == 2 ) {
			
			resultadoanterior = 0;
			system("cls");
			mostrarMenu();
			
		}
	
}

void fsen() {
	
	system("cls");
	
	float numeroa, rad;
	int opcion, numerob;
	float pi = 3.14159;
	
	if ( resultadoanterior == 0 ) {
		
		printf("\n Ingrese un angulo (en grados) \n");
		scanf("%f", &numeroa);
		
		if ( numeroa == 0 ) {
			
			printf(" \n No esta permitido realizar operaciones con el 0");
			printf(" \n Presione cualquier tecla para continuar");
			getch();
			fsen();
			
		}
		
	} else {
		
		numeroa = resultadoanterior;
		
	}
		rad = numeroa * ( pi / 180.0 );
		float a = sin(rad);
		
		printf("\n El seno de %.2f es: %.2f \n", numeroa, a);
		
		contador++;
		guardarHistorial(numeroa, numerob, 7);
		numerob =  ceil(a);
		
		printf( "\n %d \n  %f \n", numerob, a );
		printf( "\n   1. Guardar resultado para la proxima operacion \n" );
	    printf( "\n   2. Volver al menu \n" );
		scanf("%d", &opcion);
		
		if ( opcion == 1 ) {
		
			resultadoanterior = numerob;
			system("cls");
			mostrarMenu();
			
		}	else if ( opcion == 2 ) {
			
			resultadoanterior = 0;
			system("cls");
			mostrarMenu();
			
		}
	
}

void fcos() {
	
	system("cls");
	
	float numeroa, numerob, rad;
	int opcion;
	float pi = 3.14159;
	
	if ( resultadoanterior == 0 ) {
		
		printf("\n Ingrese un angulo (en grados) \n");
		scanf("%f", &numeroa);
		
		if ( numeroa == 0 ) {
			
			printf(" \n No esta permitido realizar operaciones con el 0");
			printf(" \n Presione cualquier tecla para continuar");
			getch();
			fcos();
			
		}
		
	} else {
		
		numeroa = resultadoanterior;
		
	}
		rad = numeroa * ( pi / 180.0 );
		numerob =  cos(rad);
	
		printf("\n El coseno de %.2f es: %.2f \n", numeroa, numerob );
		
		contador++;
		guardarHistorial(numeroa, numerob, 8);
		
		printf( "\n   1. Guardar resultado para la proxima operacion \n" );
	    printf( "\n   2. Volver al menu \n" );
		scanf("%d", &opcion);
		
		if ( opcion == 1 ) {
		
			resultadoanterior = numerob;
			system("cls");
			mostrarMenu();
			
		}	else if ( opcion == 2 ) {
			
			resultadoanterior = 0;
			system("cls");
			mostrarMenu();
			
		}
	
}

void ftan() {
	
	system("cls");
	
	float numeroa, numerob, rad;
	int opcion;
	float pi = 3.14159;
	
	if ( resultadoanterior == 0 ) {
		
		printf("\n Ingrese un angulo (en grados) \n");
		scanf("%f", &numeroa);
		
		if ( numeroa == 0 ) {
			
			printf(" \n No esta permitido realizar operaciones con el 0");
			printf(" \n Presione cualquier tecla para continuar");
			getch();
			ftan();
			
		}
		
	} else {
		
		numeroa = resultadoanterior;
		
	}
		rad = numeroa * ( pi / 180.0 );
		numerob =  tan(rad);
	
		printf("\n La tangente de %.2f es: %.2f \n", numeroa, numerob );
		
		contador++;
		guardarHistorial(numeroa, numerob, 9);
		
		printf( "\n   1. Guardar resultado para la proxima operacion \n" );
	    printf( "\n   2. Volver al menu \n" );
		scanf("%d", &opcion);
		
		if ( opcion == 1 ) {
		
			resultadoanterior = numerob;
			system("cls");
			mostrarMenu();
			
		}	else if ( opcion == 2 ) {
			
			resultadoanterior = 0;
			system("cls");
			mostrarMenu();
			
		}
	
}
