/**
 * @file change_parameter_wrapper.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 #include <stdlib.h>
 #include "cutility.h"
 
 /**
 * _itoa fonksiyonu standart bir C fonksiyonu degildir ancak neredeyse
 * tum derleyicilerde bulunmaktadir. Itoa fonksiyonu bir tam sayiyi 
 * yaziya donusturmektedir. Java'daki ToString methoduna benzer bir 
 * gorevi vardir. stdlib baslik dosyasinda bulunur.
 */
 
 int main()
 {
	 /**
	 * Asagidaki itoa fonksiyonunun parametreleri soyledir:
	 * birinci parametre yaziya donusturulecek olan
	 * tam sayi. Ikinci parametre yazinin yazilacagi adres.
	 * Ucuncu parametre hangi sayi sisteminin kullanilacagi.
	 * Sayi sisteminden kasıt onluk, on altılık, ikilik gibi
	 * sayi sistemleridir. Ancak diyelimki biz bu fonksiyonu  
	 * surekli onluk sayi sisteminde kullanacagız. C dilinde
	 * varsayilan arguman olmadigi icin son parametreye bir 
	 * deger gecilmelidir. Son olarak ilk iki parametrenin 
	 * sırasını degistirmek istiyelim. Ornegin ilk parametre
	 * yazinin adresi ikinci parametre ise sayi olsun. Bunu 
	 * yapabilmek icin bir wrapper fonksiyon yazmamız gerekmektedir. 
	 */
	char str[100];
	int val = 45657;
	
	mitoa(str, val);
	
	for(int i = 0; i < 100; ++i)
		putchar(str[i]);
 }