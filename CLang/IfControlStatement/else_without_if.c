

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int ival;
	printf("bir tam sayi girin: ");
	scanf("%d", &ival);	
	
	if(ival % 2 == 0); //yanlislikla yazilmiş
		printf("%d cift sayi\n", ival);
	else //if'den kopartildigi icin hata verir.
		printf("%d tek sayi\n", ival);
}