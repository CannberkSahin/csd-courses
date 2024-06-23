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
 * bildirimler vardir. Ornegin canberk.h icinde tipik olarak client
 * kodlarin ihtiyac duydugu bildirimler vardir. Bu bildirimler mesela
 * fonksiyon bildirimleri, global degisken bildirimleri, user defined
 * type degiskenler. Onislemci program eger bir baslik dosyasinin 
 * icine iki kez girerse burdaki bildirimleri iki kez derleyiciye 
 * verir. Buda tanimsiz davrania neden olabilir. 
 * 
 * canberk.h dosyasi icinde bulunan bildirimler asagidaki gibidir:
 * 
 * int func(int);
 * int foo(int);
 */
 
 int main()
 {

 }
 
