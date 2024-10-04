#include <stdio.h>
/* Cubo1.
El programa calcula el cubo de los 10 primeros n�meros naturales con la
ayuda de una funci�n. En la soluci�n del problema se utiliza una variable
global, aunque esto, como veremos m�s adelante, no es muy recomendable. */
int cubo(void); /* Prototipo de funci�n. */
int I;          /* Variable global. */
int main(void)
{
    int CUB;
    for (I = 1; I <= 10; I++) /* Nos permite ejecutar de manera repetitiva un
        bloque de instrucciones */
    {
        CUB = cubo(); /* Llamada a la funci�n cubo. */
        printf("\nEl cubo de %d es: %d", I, CUB);
    }
}
int cubo(void) /* Declaraci�n de la funci�n. */
/* La funci�n calcula el cubo de la variable global I. */
{
    return (I * I * I);
}
