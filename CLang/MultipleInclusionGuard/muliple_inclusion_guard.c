/**
 * @file muliple_inclusion_guard.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * Hem C dilinde hem de C++ dilinde kullanilan bir terimdir. Tukcesi 
 * coklu dahil etmeye karsi koruma. Baslik dosyalarinda (header .h) 
 * bildirimler vardir. Bu bildirimler fonksiyon bildirimleri, makrolar
 * ve user define type degisken bildirimleridir. Ornegin elimizde 
 * canberk.h isimli bir dosya bulunsun. Eger onsilemci program bir baslik
 * dosyasinin icine iki kez girerse burdaki bildirimleri iki kez derleyiciye
 * verir. Buda tanimsiz davranisa yol acabilir. 
 * Ornek canbek.h dosyasi icinde asagidaki tanimlar vardır:
 * int func(int);
 * int foo(int);
 *
 * muliple_inclusion_guard.c dosyasi icerisinde bilerek veya bilmeyerek
 * canberk.h dosyasini iki kez include edersek, onsilemci programi 
 * baslik dosyasina gider ve oradaki bildirimleri alarak bildirimleri
 * muliple_inclusion_guard.c dosyasina yapistirir. Daha sonra ikinci 
 * canberk.h dosyasina girer ve yine ayni bildirimleri yine 
 * muliple_inclusion_guard.c dosyasina yapistirir. 
 * 
 * muliple_inclusion_guard.c asagidaki gibi olur:
 * int func(int);
 * int foo(int);
 * int func(int);
 * int foo(int);
 *
 * Derleyicinin bildirimleri iki kez gormesi sentaks hatasimidir?
 * Cevap it depends. Derleyicinin bildirimleri iki kez gormesi bildirime
 * bagli olarak sentaks hatasi da olabilir tanimsiz davranis da olabilir.
 * Ornegin fonksiyon bildirimlerinde bir fonksiyonun bildirimini derleyici
 * ozdes olarak iki ya da daha fazla gorurse bir sentaks hatasi olmaz 
 * bu redeclaration'dur. Ancak user define type bildirimlerini derleyici
 * iki kez ızdes olarak gorurse bu sentaks hatasidir. 
 * struct Data {
 *	int x, y;
 * };
 * Yapı bildirimi derleyici tarafından iki kez gorulurse C dilinin kurallarina 
 * gore sentaks hatasidir. 
 * 
 * Yukaridaki gibi nedenlerden dolayi olusturulan bir baslik dosyasinin icine
 * onislemci programin sadece ve sadece bir kez girmesini saglamak gerekmektedir.
 * Onislemci programin bir baslik dosyasi icine sadece bir kez girmesini ikinci
 * kez girmemesini garanti altina almak icin olusturulan onislemci komutlarina
 * muliple_inclusion_guard denilmektedir. Sentaks yapisi canberk.h dosyasinda
 * gosterilmistir. 
 */
 
 #include "canberk.h"
 #include "canberk.h"
 
 /**
 * Yukaridaki baslik dosyalari onislemci programinin yurutulmesi ile
 * silinerek yerine asagidaki gibi bildirimler yapistirilir. 
 * int func(int);
 * int foo(int);
 * int func(int);
 * int foo(int);
 *
 * struct Data {
 *	int x, y;
 * };
 *
 * struct Data {
 *	int x, y;
 * };
 */
 
 int main()
 {
	int x = 10;
	printf("%d\n", x);
 }
 
