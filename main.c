#include <stdio.h>
#include <stdlib.h>
#include "math.h"

double factorial (int n)
int main()
{
    int i,
        n;
    double fact=1;
    printf("Ingrese un nro entero:  ");
    scanf("%d", &n);
    if (n<0)
    {
        printf("No se puede calcular el factorial de un nro negativo.\n");
        return 1;
    }

    printf("El factorial de %d es %.0lf\n",n,factorial(n));

    printf("Ingrese otro nro entero:");
    scanf("%d",&n);
    if (n<0)
    {
        printf("No se puede calcular el factorial de un nro negativo.\n");
        return 1;
    }

    printf("El factorial de %d es %.0lf\n",n,factorial(n));
    return 0;

}


double factorial(int(n))
{

    double fact=1;
    if (n<0)
        return 0;
    for (;n>1;n--1)
        fact *=n;
    return fact;
}



