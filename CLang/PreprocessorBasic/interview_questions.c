/**
 * @file interview_question.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * ctype.h dosyasıdnaki standart c fonksyoonları makro olarak
 * define edilmistir. Ornegin isupper fonksiyonmus gibi makro
 * olarak tanımlanmıstır. Asagidaki kodlarda if paranteze 
 * alinmadıgı halde neden hata vermemektedir? Programciya
 * soru soruldugunda asagidaki isupper makrosu gosterilmemektedir.
 * Makronun tanımı ctype.h dosyassından gelmektedir. 
 */
 
 #define   isupper(c)	 ((c) >= 'A' && (c) <= 'Z')
 
 int main()
 {
	 int ch;
	 printf("karakter girin: ");
	 ch = getchar();
	 
	 if isupper(ch)
		printf("buyuk harf\n");
	 
	/**
	* Yukaridaki isupper makrosu guvenlik amaciyla dısardan
	* paranteze alindigi icin if deyiminin parantezleri 
	* olusmaktadir. Bundan dolayi yukaridaki kod hata vermez.
	*
	* if ((c) >= 'A' && (c) <= 'Z')
	* 		printf("buyuk harf\n");
	*/
 }