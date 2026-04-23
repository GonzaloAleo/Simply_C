/*
El programa es sobre los datos de facturacion de un comercio. El mismo, determina e informa:
 - 1) Total de lo facturado por día, solo para aquellos días en los que hubo facturacion
 - 2) Día de mayor facturación (unico) y monto total facturado ese día
*/
#include <stdio.h>
#include "facturacion.h"

int main()
{
    long nroFactura;
    int dia;
    double importe;
    char codCliente[5];
    double acumDia[31]; //acumula los dias facturados

    inicializarArray(acumDia);

    //se lee la primer fila de la tabla
    scanf("%ld %d %lf %s",&nroFactura,&dia,&importe,codCliente);

    while(nroFactura>0)
    {
        //acumulo el importe facturado
        acumDia[dia-1] = acumDia[dia-1] + importe;

        //leo la siguiente fila
        scanf("%ld %d %lf %s",&nroFactura,&dia,&importe,codCliente);
    }

    mostrarTotales(acumDia);
    diaMayorFacturacion(acumDia);

    return 0;
}
