/**
 * @file undefined_behavior.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * C dilinde bir makroyu birden fazla yerde farklı degere
 * define etmek tanımsız davranıstır. On islemci program 
 * birden fazla yerde define komutu gorurse ve bu define 
 * komutlarından aynı isim farklı degerlerle tanımlanmıssa
 * tanımsız davranıs olur. Asagidaki kodun anlamı ilk tanımlandıgı
 * yerden ikinci tanımlandıgı yere kadar 100 ile degistirilsin 
 * ikinci tanımlanan yerden sonra 200 ile yer degistirsin 
 * seklinde olmaz!
 */
 
 #define   SIZE    100
 
 
 
 #define   SIZE    200
 
 int main()
 {
	//codes ...
 }