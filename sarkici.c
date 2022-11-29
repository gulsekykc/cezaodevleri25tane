#include <stdio.h>

void muzik(char sanatci[],char sarki[], char uygulama[])
{
   printf("\n hangi uygulamamiz ile dinlemek istersiniz?:");
   scanf("%s",&uygulama);
   printf("\n sarki dinlemek ve rahatlamak icin dogru yerdesiniz!!");
   printf("\n oncelikle hangi sanatci ile hayallere dalmak istersiniz?:");
   scanf("%s",&sanatci);
   printf("\n hangi sarkiyi dinlemek istersiniz?:");
   scanf("%s",&sarki);
   printf(" %s uygulamasindan",&uygulama);
   printf(" %s sanatcisindan",&sanatci);
   printf(" %s sarkisi simdi calmaktadir keyifli dinlemeler",&sarki);
}
int main()
{ 
     char uygulama[]="spotiky";
     char sanatci[] = "ismailyk";
     char sarki[] = "basgaza";
      muzik(uygulama,sanatci,sarki);
      
      return 0;
}