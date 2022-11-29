#include<stdio.h>
//duzgun cokgenin kenar sayisindan kaç elemanı bilinmesinin hesabi
double cokgenicaci(double x)
{
    return (2*x-3);

}
int main()
{
    double kenarsayi=cokgenicaci(3);
    printf("%0.2lf",kenarsayi);
    return 0;
}
