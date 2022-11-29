#include<stdio.h>
//duzgun cokgenin kenar sayisindan ic aci hesabi
double disaci(double x)
{
    return (360/x);

}
int main()
{
    double kenarsayi=disaci(3);
    printf("%0.2lf",kenarsayi);
    return 0;
}
