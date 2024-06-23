/**
 * @file max_macro.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * Asagidaki makro iki sayidan en buyugunu bulmaktadir.
 * Gorunusu tıpki bir fonksiyon gibidir. 
 */
 
 #define   Max(a, b)	 ((a) > (b) ? (a) : (b))
 
 int main()
 {
	int x = 10, y = 25;
	int max;
	
	//...
	
	max = max(x, y);  // max = ((x) > (y) ? (x) : (y));
	printf("%d\n", max); 
 }