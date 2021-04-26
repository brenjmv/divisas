#include<stdio.h>

//divisas

int a = 0;
int operacion, resultado; 
printf("dame la cantidad en pesos mexicanos: ");
scanf("%d", &a);
printf("seleccione la divisa a la que quiere convertir\n");
printf(" 1.- Libra \n 2.- Dolar \n 3.- Euro \n");
scanf("%d", &operacion)

switch (operacion)
{
case 1:
    resultado = a * 0.036;
    printf("El resultado es: %d * 0.036 = %d", a, resultado);
    break;
case 2:
    resultado = a * 0.050;
    printf("El resultado es: %d * 0.050 = %d", a, resultado);
    break;
case 3: 
    resultado = a * 0.042;
    printf("El resultado es: %d * 0.042 = %d", a, resultado);
    break;

default:
    printf("Escoger una opcion valida")
    break;
}

