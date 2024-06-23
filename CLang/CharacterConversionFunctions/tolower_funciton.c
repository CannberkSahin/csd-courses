/**
 * @file tolower_function.c
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
	 * tolower fonksiyonu kendisine gonderilen 
	 * karakter buyuk harf karakteri ise fonksiyonun
	 * geri donus degeri aynı karakterin kucuk harf
	 * karsiligidir. Ornek A -> a
	 * Ancak eger gonderilen karakter buyuk harf
	 * karakteri degilse geri donus degeri gonderilen
	 * karakterin kendisidir. Ornek 2 -> 2, m -> m
	 */
	 printf("%c ---> %c\n", ch, tolower(ch));
 }