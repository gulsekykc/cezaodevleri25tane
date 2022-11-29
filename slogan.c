#include <stdio.h>

void slogan(char marka[],char urun[])
{
   printf("\n %s 'a hosgeldiniz",marka);
   printf("\nburada aradiginiz herseyi bulabilirsiniz");
   printf("\narama kismina ne yazmak istersiniz?");
   scanf("%s",&urun);
   printf("\nbu markette %s vardir,tesekkurler",&urun);
}
int main()
{
    char marka[] = "migros";
    char urun[] = "sandik";
      slogan(marka,urun);
      
      return 0;
}