#include <stdio.h>

void yabayzeka(char isim[],char nasilsin[], char napiyorsun[],char soru[])
{
   printf("\n isimle baslayalim ben \t MC-YARALI-ROBOTIX \t sen kimsin?:");
   scanf("%s",&isim);
   printf("\n selam %s nasilsin!!",&isim);
   scanf("%s",&nasilsin);
   printf("\n ben de %s:",&nasilsin);
   printf("\n su anda napiyorsun?:");
   scanf("%s",&napiyorsun);
   printf("%s yapiyorsun demek ki",&napiyorsun);
   printf(" \n bana napiyorsun diye sormayacak misin?");
   scanf("%s",&soru);
   
   printf(" \n sansa bak ben de %s yapiyorum. ",&napiyorsun);
   printf(" \n biraz isim var sonra gorusuruzz");
}
int main()
{ 
     char napiyorsun[]="resim";
     char isim[] = "gulse";
     char nasilsin[] = "iyiyim";
     char soru[]="napiyorsun";
     
      yabayzeka(napiyorsun,isim,nasilsin,soru);
      
      return 0;
}