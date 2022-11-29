#include<stdio.h>
//duzgun cokgenin kenar sayisindan bütün köşegenlerinin hesabi
double tumkosegen(double x)
{
    return x*(x-3)/2;

}
int main()
{
    double kenarsayi=tumkosegen(4);
    printf("%0.2lf",kenarsayi);
    return 0;
}
