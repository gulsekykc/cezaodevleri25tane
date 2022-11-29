#include <stdio.h>


void hediye(char yazar[],char kitap[])
{
    printf("\n DUNYACA unlu %s \t isimli yazarimizin  ",yazar);
    printf(" \t%s \tisimli kitabini kazandiniz!!",kitap);

}
int main ()
{
    char yazar[] = "yilmaz";
    char kitap[] = "susamislar";
     hediye(yazar,kitap);
     hediye("ORHAN PAMUK","MASUMIYET MUZESI");
          
      return 0;
}