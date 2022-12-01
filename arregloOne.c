#include <stdio.h>

const int MAX = 10;

int revisarFinDatos()
{
    int continuar;
    printf("Desea continua cargando datos?(1/0)");
    scanf("%i", &continuar);
    return continuar;
}

int cargaDato()
{
    int dato;
    do
    {
        printf("Ingrese Dato:");
        scanf("%i", &dato);
    } while (dato < 0);

    return dato;
}

int CargaArreglo(int arreglo[])
{

    int dato;
    int ce = 0;
    int continuar;
    continuar = revisarFinDatos();

    while (continuar && ce < MAX)
    {
        dato = cargaDato();
        ce += 1;
        arreglo[ce] = dato;

        continuar = revisarFinDatos();
    }
    if (continuar)
        printf("fin anormal");

    return ce;
}

void mostrarArray(int arreglo[], int ce)
{

    int pos = 0;
    while (pos <= ce)
        printf("\n[%i]", arreglo[pos++]);
}

int main(int argc, char **argv)
{
    int arreglo[MAX];
    int ce = 0;

    ce = CargaArreglo(arreglo);
    mostrarArray(arreglo, ce);

    return 0;
}