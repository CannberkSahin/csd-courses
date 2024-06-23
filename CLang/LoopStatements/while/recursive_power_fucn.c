/**
 * @file recursive_power_func.c
 * @author Canberk Sahin
 * @date 11 Sep 2020
 *
 * */
 
 #include <stdio.h>
 
 /**
 * Asagida us alma fonksiyonu olan power
 * recursive olarak yazilmistir.
 */
 int power(int base, int exp)
 {
	 return exp == 0 ? 1 : base * power(base, exp - 1); 
 }
 
 int main()
 {
	int x, y;
	
	printf("iki tam sayi girin: ");
	scanf("%d%d", &x, &y);
	
	printf("%d => %d = %d\n", x, y, pow(x, y));
 }