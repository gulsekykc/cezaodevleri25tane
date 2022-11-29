#include<stdio.h>
// dogum gunu mesajı hazırlamak icin
void birthday(char x[], int y, int z)
{
    printf("\niyi ki dogdun %s ! ",x);
    printf("\n%d yasina girdin !",y);
    printf("\n seneye %d olacaksin ",z);
    z=y+1;
}
int main()
{ 
    
    char ad[] = "Gulse";
    int year =20;
    int gelecek = 21;
     birthday(ad,year,gelecek);
     birthday("simal",12,13);
     birthday("elsa",22,23);
     birthday("salih",46,47);

     





     return 0;
}  