/**
 * @file recursive_factorial.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * Faktoriyel fonksiyon recursive olarak ta 
 * yazilabilir.
 */
 
 /**
 * Faktoriyel demek n * n -1 demektir. 
 * Asagidaki kod one-liner olarak yazilmistir.
 * Eger 2'den kucuk bir sayi ise faktoriyel 1 demektir.
 * Eger 2'den buyuk bir sayi ise faktoriyel n * n - 1 demektir.
 */
 int factorial(int val)
 {
	 return val < 2 ? 1 : val * factorial(val - 1); 
 }
 
 int main()
 {
	 for(int i=0; i < 13; ++i)
		 printf("%2d! = %d\n", i , factorial(i));
 }