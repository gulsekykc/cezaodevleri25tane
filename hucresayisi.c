#include <stdio.h>

// her dakika başı içinde bulunduğu dakika kadar hücresi oluşan canlının toplam hücre sayisi
int hucre(int saat){
	int toplam = 0;
	
	for(int i = 1; i <= saat; i++){
			
	    toplam = i + toplam;

	}

	return toplam;
}

int main()
{
     
    int saat;
   
 	printf("\n biliminsaninin kac dakika bekledigini giriniz :"); 
	 
	scanf("%d",&saat);
	
	int canli = hucre(saat);
	
	printf("\n canlidaki toplam hucre sayisi: %d \n", canli); 

	 
    return(0);
}