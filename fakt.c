#include<stdio.h>
long int sayicarp(int n);
int main() {
    int n;
    printf("pozitif sayi giriniz: ");
    scanf("%d",&n);
    printf(" %d sayisinin faktoriyeli = %ld", n, sayicarp(n));
    return 0;
}

long int sayicarp(int n) {
    if (n>=1)
        return n*sayicarp(n-1);
    else
        return 1;
}