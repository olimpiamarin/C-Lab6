double suma(double a[], int n){
    double s = 0.;
    int i;
    for(i = 0; i < n; i++)
        s = s + a[i];
    return s;
}

double maxim(double a[], int n){
    int i;
    double max;
    max = a[0];
    for(i = 1; i < n; i++){
        if(max < a[i])
            max = a[i];
    }
    return max;
}
