

#include <stdio.h>
#include <stdlib.h>

/* İki sayidan buyuk olani bulan fonksiyon*/
int first_type_max(int a, int b)
{
	if (a > b)
		return a;
	else //redundant else (redundant = fazlalik, fuzuli anlamindadir)
		return b; //else yazilmasada kodun anlami degismez.
}

int second_type_max(int a, int b)
{
	if (a > b)
		return a;
	
	return b; //redundant else kullanilmamistir.
}

int main()
{
	int x, y;
	printf("iki sayi giriniz: ");
	scanf("%d%d", &x, &y);
	
	printf("Buyuk sayi = %d\n", first_type_max(x, y));
	printf("Buyuk sayi = %d\n", second_type_max(x, y));
}