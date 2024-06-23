/**
 * @file loop_statement_with_to.c
 * @author Canberk Sahin
 * @date 11 Sep 2020
 *
 * */
 
 #include <stdio.h>
 
 int main()
 {
	 /**
	 * Kosul op. Dongu deyimlerinde kullanilabilir. 
	 * Boylece kod daha kompakt hale gelmektedir.
	 */
	 
	 int a = 5;
	 int b = 10;
	 
	 /** Asagidaki kodda i degeri a ve b'nin buyuk
	 *   olanindan baslayacaktir.
	 */
	 
	 for(int i = a > b ? a : b; i < 100; ++i)
		 printf("Kosul operatoru\n");
 }