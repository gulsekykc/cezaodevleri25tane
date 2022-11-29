
#include<stdio.h>
//duzgun cokgenin kenar sayisindan bütün köşegenlerinin hesabi
int para()
{
    int x;
    int y;
    int z;
    int toplam;
    printf("\n3 kardesten her biri bir onceki kardesten 1 TL fazla para vererek \n175TL degerindeki oyuncagi almak istiyorlar");
    printf("\nilk kardesin ne kadar parasi var?:");
    scanf("%d",&x);
    y=x+1;
    z=x+2;
    toplam=x+y+z;
     if( toplam > 175 ) {
          printf("\noyuncagi alabilirler");
    }
    else {
           printf("\noyuncagi alamazlar");
    }
    printf("\ncunku kardeslerin toplam parasi %d idir",toplam);

    
    return toplam ;

}
int main()
{
    
    para();
    
    return 0;
}

