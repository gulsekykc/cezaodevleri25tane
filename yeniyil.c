#include <stdio.h>

void yeniyil(char aile[],int yenisene)
{
    printf("\n %20s ailesine mutlu yillar diliyoruz!",aile);
    printf("\n %20d yilinin cok guzel gecmesi dilegiyle gorusmek uzere!",yenisene);

}
int main ()
{
    char aile[] = "yilmazlar";
    int yenisene = 2023;
     yeniyil(aile,yenisene);
     yeniyil("kayikcilar",2023);
     yeniyil("sezgin",2023);

          
      return 0;
}