/**
 * Olusturulan bir baslik dosyasinin icine
 * onislemci programin sadece ve sadece bir kez girmesini saglamak gerekmektedir.
 * Onislemci programin bir baslik dosyasi icine sadece bir kez girmesini ikinci
 * kez girmemesini garanti altina almak icin olusturulan onislemci komutlarina
 * muliple_inclusion_guard denilmektedir.
 */

//#pragma once

#ifndef CANBERK_H
#define CANBERK_H

/** 
* Onislemci programi bu dosyaya ilk kez girdiginde ifndef komutunun oldugu makro
* tanimli degil. On islemci #ifndef CANBERK_H makrosunu ilk kez gordugunde 
* makro tanimli olmadigi icin kosul dogru olacak ve ifndef endif bloguna 
* girilecektir. Girer girmez #define CANBERK_H makrosu ile karsilasicaktir. 
* BOylece ikinci satirdaki define onislemci komutu ile makro tanimli hale 
* gelmekedir ve boylece onislemci ilk kez bu dosyaya girmistir. Ancak onislemci
* tekrar bu dosyaya girmeye calistiginda makro artik tanimli oldugu icin
* #ifndef CANBERK_H kosulu yanlis olacaktir ve ifndef endif blogu icine 
* girilmeyecektir. 
*/

//ALL CONTENT IS HERE...

int func(int);
int foo(int);

struct Data {
	int x, y;
};


#endif

/**
* Yukaridaki multiple inclusion guard komutlari ile asagidaki komutlar ozdestir.
* Microsoft'un baslik dosyalarinda asagidaki gibi bir multiple inclusion guard 
* komutlari yazilmaktadir. 
*
* if   !defined  CANBERK_H
* #define CANBERK_H
* //ALL CONTENT IS HERE...
* #endif
*/

/**
* Derleyicilerin özelleştirmesine olanak verilmiş pragma isimli bir onislemci
* komutu bulunmatadir. Oyle bir onislemci komutu ki ne is yapmasi gerektigi
* kullanici tarafından ayarlanabilmektedir. "Progma" onislemci komutu derleyici 
* tarafindan ozellestirilebilen derleyicilerin ozel anlam yukleyerek ilave 
* islemler kazandirabilecegi bir komuttur. Ancak dikkat pragmalarin tasinabilirligi
* yoktur. MEsela gcc derleyicisindeki bir pragma windows derleyicisinde olmayabilir. 
* Once pragmasi multiple inclusion guard yerine kullanilan bir onislemci komutudur.
* #pragma once once demek bir kere demektir. Once progması multiple inclusion guard'ı
* otomaige baglamaktadir. 
*/