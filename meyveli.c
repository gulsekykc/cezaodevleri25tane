#include <stdio.h>
// tum kardesler aynı sayıda meyve alıyor toplam ne kadar meyve alınır
int pazar()

{ int meyve;
 int kardes;
 int toplam;
  printf("\n kac kardes var?:");
  scanf("%d",&kardes);

    
  printf("\n herbiri kac tane meyve aldi?:");
  scanf("%d",&meyve);
     
    toplam= meyve*kardes;
  
    
  printf("\ntoplam %d tane meyve alinmistir.", toplam);
    
  return toplam;
} 
int main()
{ 
  pazar();

    return 0;
}
