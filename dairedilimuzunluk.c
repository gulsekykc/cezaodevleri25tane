#include<stdio.h>
//daire dilimi uzunluk hesabi
double dairedilimuzunlugu(double r,double Q)
{    
    const float PI = 3.14159;
    return (PI*r*2*Q/360)+2*r ;

}
int main()
{
    double uzunluk=dairedilimuzunlugu(3,30);
    printf("%0.4lf",uzunluk);
    return 0;
}
