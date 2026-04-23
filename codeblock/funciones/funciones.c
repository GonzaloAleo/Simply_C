long factorial (int n){
    long f = 1;
    int i = 2;

    while(i <= n){
        f = f * i;
        i++;
    }

    return f;
}
