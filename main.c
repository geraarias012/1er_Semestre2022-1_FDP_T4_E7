#include <stdio.h>
#include <stdlib.h>

void Llenar_matriz (int v[][4]);
void Imprimir_matriz_renglones (int v[][4]);
void Imprimir_matriz_columnas (int [][4]);

int main()
{
    int arreglo[3][4];
    Llenar_matriz(arreglo);
    return 0;
}

void Llenar_matriz (int v[][4])
{
    int x, y;
     srand(time(NULL));
    for(x=0;x<2;x++)
    {
        for (y=0;y<3;y++)
        {
        v[x][y]=rand()%20;
        }
    }
    Imprimir_matriz_renglones(v);
    Imprimir_matriz_columnas(v);
}
void Imprimir_matriz_renglones (int v[][4])
{
    int x, y, a;
    for(x=0;x<2;x++)
    {
        for(y=0;y<3;y++)
        {
            printf("%d\t", v[x][y]);
            a=a+v[x][y];
        }
        printf("%d\t", a);
        a=0;
        printf("\n");
    }
}
void Imprimir_matriz_columnas (int v[][4])
{
    int x, y, b;
    for(y=0;y<3;y++)
    {
        for(x=0;x<2;x++)
        {
            b=b+v[x][y];
        }
        printf("%d\t", b);
        b=0;
    }
}
