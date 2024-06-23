/**
 * @file lookup_table_factorial.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * Eger en düsük maliyetle faktöriyel hesabi
 * yapririlmak istenirse lookup table kullanilmalidir.
 * Boylece for döngüsünün maliyeti ve diger 
 * matematiksel islemelerin maliyetinden kurtulmus
 * oluruz. 12 tane deger run time'da hesaplanmaz. 
 */
 
 /**
 * @param faktoriyeli alinacak sayi
 * @retval parametreye gecilen sayinin faktoriyeli
 */
 int factorial(int x)
 {
	const int a [] = {
		1,
		1,
		2,
		6,
		24,
		120,
		720,
		5040,
		40320,
		362880,
		3628800,
		39916800,
		479001600,
	};
	
	return a[x];
 }
 
 int main()
 {
	 for(int i = 0; i < 13; ++i)
		 printf("%2d! = %d\n", i, factorial(i));
 }