#include <stdio.h>

void tanisalim(char ad[])
{
    printf("selamm\n");
    printf("benim adim %s \n",ad);
    printf("nasilsin bakalim?");
    
}

int main()
{
    char ad[] = "hocam";
     tanisalim(ad);
     tanisalim("mahmut");
     
     return 0;
}