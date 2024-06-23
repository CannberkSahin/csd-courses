/**
 * @file wile_assignment_idiom.c
 * @author Canberk Sahin
 * @date 11 Sep 2020
 *
 * */
 
 #include <stdio.h>
 
 int main()
 {
	 /**
	 * While parantezi icinde atama operatorunun urettigi
	 * degerden faydalanmak en yaygin idiomlardan biridir.
	 * Not: While dongusunun sorgu kismi bir sequence point
	 * olusturmaktadir. 	 
	 */
	 
	 int c;
	 
	 // new line gelmedigi surece donen dongu
	 while((c = getchar()) != '\n'){
		 printf("%c  %d\n", c, c);
	 }
	 
	 /**
	 *  Yukarida yazilan kodun aynisi virgul operatoru
	 *  ile yazilabilir. Virgul op. bir sequence point 
	 *  olusturmaktadir, once virgul op. sol operandi
	 *  yapilir daha sonra sag operandi yapilir. Sol
	 *  operand yapildiktan sonra yan etki gecerli olmaktadir.
	 *
	 *	while(c = getchar(), c != '\n'){
	 *	 	printf("%c  %d\n", c, c);
	 *  }
	 */
	 
	 /**
	 * Atama op. urettigi deger nesneye atanan deger oldugu 
	 * icin hem getchar ile alinan karakter c degiskenine
	 * ataniyor hemde c karakterinin new line'a esiş olup 
	 * olmadigi sinaniyor.
	 */
 }