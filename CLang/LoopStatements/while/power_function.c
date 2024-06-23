/**
 * @file power_function.c
 * @author Canberk Sahin
 * @date 11 Sep 2020
 *
 * */
 
 #include <stdio.h>
 
 /**
 * Asagida int geri donuslu ve int parametreleri
 * olan power fonksiyonu yazilmistir.
 * @param base:taban parametresi
 * @parem exp: üs alma parametre
 */
 int power(int base, int exp)
 {
	 int result = 1;
	 
	 while(exp--)
		 result *= base;
	 
	 return result;
 }
 
 /**
 *	power fonsiyonu test kodlari
 */
 int main()
 {
	int x, y;
	
	printf("iki tam sayi girin: ");
	scanf("%d%d", &x, &y);
	
	printf("%d => %d = %d\n", x, y, pow(x, y));
 }