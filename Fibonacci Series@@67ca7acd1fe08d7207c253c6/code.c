void fibonacciSeries(int n){
    int a=0, b=1, temp;
    for (int i=0; i<n; i++){
        printf("%d ", a);
        temp= a+b;
        a=b;
        b=temp;
    }
    printf("\n");
    return;
}