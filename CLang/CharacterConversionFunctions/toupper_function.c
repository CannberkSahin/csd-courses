/**
 * @file toupper_function.c
 * @author Canberk Sahin
 * @date 10 Sep 2020
 *
 * */
 
 #include <stdio.h>
 #include <ctype.h>
 #include <stdlib.h> 
 
 int main()
 {
	 int ch;
	 
	 printf("Enter a character: ");
	 ch = getchar();
	 
	 /**
	 * toupper fonksiyonu kendisine gonderilen 
	 * karakter kucuk harf karakteri ise fonksiyonun
	 * geri donus degeri aynı karakterin buyuk harf
	 * karsiligidir. Ornek m -> M 
	 * Ancak eger gonderilen karakter kucuk harf
	 * karakteri degilse geri donus degeri gonderilen
	 * karakterin kendisidir. Ornek 5 -> 5, R -> R
	 */
	 printf("%c ---> %c\n", ch, toupper(ch));
 }