int agregar(int a[],int* len, int v)
{
    a[*len]=v; //Ingresa el valor en la posicion libre
    *len = *len+1; //Aumenta la longitud del array
    return *len-1; //Devuelve la posicion donde se agregó el nuevo valor
}

int buscar(int a[], int len, int v)  //busqueda secuencial
{
    int i = 0;

    while(i < len && a[i] != v)
    {
        i++;
    }

    return i<len?i:-1;
}

int buscarYAgregar(int a[], int* len, int v, int *enc)
{
    int pos = buscar(a,*len, v);

    if(pos >= 0)
    {
        *enc = 1;
    }
    else
    {
        *enc = 0;
        pos = agregar(a,len,v);
    }
    return pos;
}
