/**
 * @file sum_square_macro.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * Asagidaki makro birden fazla makro argumani almistir.
 * On islemci program tur bilgisi bilmedigi icin makro 
 * argumanlarinda int gibi tur bildirimi yapilmaz. 
 * Makro argumanlari virgüllerle ayrilan liste biciminde
 * tanimlanir. 
 */
 
 #define   sum_square(a, b)	 ((a) * (a) + (b) * (b))
 
 int main()
 {
	int x = 10, y = 25;
	int z = 
	
	//...
	
	z = sum_square(x, y);
	printf("%d\n", z);
 }