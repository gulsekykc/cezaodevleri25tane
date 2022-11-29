#include<stdio.h>
//duzgun cokgenin kenar sayisindan toplam ic aci hesabi
double cokgenicacitop(double x)
{
    return (x-2)*180;

}
int main()
{
    double kenarsayi=cokgenicacitop(4);
    printf("%0.2lf",kenarsayi);
    return 0;
}
