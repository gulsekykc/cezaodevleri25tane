#include<stdio.h>
//duzgun cokgenin kenar sayisindan ic aci hesabi
double cokgenicaci(double x)
{
    return ((x-2)/x)*180;

}
int main()
{
    double kenarsayi=cokgenicaci(4);
    printf("%0.2lf",kenarsayi);
    return 0;
}