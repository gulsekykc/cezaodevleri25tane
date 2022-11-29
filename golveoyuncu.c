#include <stdio.h>

// takımdaki her numaradaki oyuncu kendi numarası kadar gol atıyor,toplam kaç gol atılır oyuncu sayisi girerek bulunuz?
int goller(int x) {

	int toplam = 0;
	
	for(int i = 1; i <= x; i++){
			
	    toplam = i + toplam;

	}

	return toplam;
}

int main()
{
     
    int x;
   
 	printf("\n oyuncu sayisi giriniz :"); 
	 
	scanf("%d",&x);
	
	int gol = goller(x);
	
	printf("\ngol sayisi: %d \n", gol); 

	 
    return(0);
}