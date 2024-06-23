/**
 * @file is_leap_yer.c
 * @author Canberk Sahin
 * @date 10 Sep 2020
 *
 * */
 
 #include <stdio.h>
 
 /**
 *  Artik yil kosulu: yil olarak alinan degisken:
 *	4'e tam bolunecek 
 *  	- ya 100'e tam bolunmeyecek 
 *		- ya da 400'e tam bolunecek
 *  Ozet olarak: Artık yıllar 4'e tam bolunen 
 *	yillar icinde 100'e tam bolunmeyenler ya da
 *  400'e tam bolunenlerdir.
 *
 *  Örnekler:
 *		1987 -> artik yil degil
 *		1984 -> artik yil
 *		2000 -> artik yil
 *		1900 -> artik yil değil!!!
 */
 
 int isleap(int y)
 {
	return (y % 4 == 0) && (y % 100 != 0|| y % 400 == 0);
 }
 
 /**
 * Test driven function.
 * Fonksiyon testi icin yazilan kodlar.
 */
 int main()
 {
	 int year;
	 
	 printf("Enter a year: ");
	 scanf("%d", &year);
	 
	 if(isleap(year))
		 printf("%d is leap year\n", year);
	 else
		 printf("%d is not leap year\n", year);
 }