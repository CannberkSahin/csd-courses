/**
 * @file do_while.c
 * @author Canberk Sahin
 * @date 11 Sep 2020
 *
 * */
 
 #include <stdio.h>
 
 /**
 *	Asagidaki programda klavyeden
 *  0'dan kucuk ve ya 100'den buyuk
 *  bir tam sayi girildigi surece
 *  girilen sayilari ekrana yazdiran
 *  do while dongusu yazilmistir.
 *  Eger 0 ile 100 sayilari arasinda
 *  bir deger girilirse donguden 
 *  cikar. 
 */
 int main()
 {
	 int ival;
	 
	 do {
		printf("bir tam sayi girin: ");
		scanf("%d", &ival);
	 }while(ival < 0 || ival > 100);
	 
	 printf("girilen sayi : %d\n", ival);
	 
	 //de-morgan: ival >= 0 && ival <= 100 yukaridaki kosul ile ayni anlamdadir.
 }