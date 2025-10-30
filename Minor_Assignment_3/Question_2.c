void sumarr(int a[], int b[], int r[], int size);

//main function goes here

void sumarr(int a[], int b[], int r[], int size) {
    for(int i=0; i<size; i++) {
        r[i] = a[i] + b[i];
    }
}
