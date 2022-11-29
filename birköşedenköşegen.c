#include<stdio.h>
//duzgun cokgenin kenar sayisindan bir köşeden köşegen sayisi hesabi
unsigned char birkosedenkosegen(unsigned char x)
{
    return (x-3);

}
int main()
{
    unsigned char kenarsayi=birkosedenkosegen(5);
    printf("%0.2d",kenarsayi);
    return 0;
}
