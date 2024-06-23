/**
 * @file Assignment_with_ternary_op.c
 * @author Canberk Sahin
 * @date 11 Sep 2020
 *
 * */
 
 #include <stdio.h>
 
 int main()
 {
	 int a = 20;
	 int b = 5;
	 int max;
	 
	 /**
	 * Eger bir sarta bagli olarak bir nesneye
	 * sarta bagli olacak sekilde ilk deger verilecek
	 * ya da atanacaksa ternary op. kullanılır.
	 */
	 if (a > b)
		 max = a;
	 else 
		 max = b;
	 
	 //Yukaridaki kodda if yerine kosul operatoru kullanilir:
	 max = a > b ? a : b;
	 printf("Max = %d\n", max); 
	 
	 /**
	 * Not: Degiskenlere ilk deger verme isleminde 
	 * if zaten kullanilamaz. Bunun yerine kosul op. 
	 * kullanilir.
	 */
	 
	 int min = a < b ? a : b;
	 printf("Min = %d\n", min); 
	 
	 //Example: feb_days = isleap(y) ? 29 : 28;
	 
 }