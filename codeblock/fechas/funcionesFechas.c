void dividirFecha(long f, int* d, int* m, int* a){ //f es la fecha en aaaammdd
    int resto;

    *a = f/10000;
    resto = f%10000;
    *m = resto/100;
    *d = resto%100;
}

int esAnioBisiesto(int a){
    int multiploDe4,multiploDe100,multiploDe400;

    multiploDe4 = a%4==0; //si es multiplo de 4, asigna 1. Sino, 0
    multiploDe100 = a%100==0;
    multiploDe400 = a%400==0;

    //Es bisiesto si es multiplo de 4 y no de 100, o si es multiplo de 400
    return (multiploDe4 && !multiploDe100) || multiploDe400;
}
