#include<stdio.h>
//duzgun cokgenin kenar sayisindan kac ucgensel bolgeye ayrılacağının hesabi
double ucgensel(double x)
{
    return (x-2);

}
int main()
{
    double kenarsayi=ucgensel(6);
    printf("%0.2lf",kenarsayi);
    return 0;
}
