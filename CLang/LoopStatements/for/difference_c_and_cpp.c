/**
 * @file difference_c_and_cpp.c
 * @author Canberk Sahin
 * @date 11 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 int main()
 {
	 /**
	 * C dilinde dongu degiskeni for dongusu
	 * icinde tanimlandigi zaman dongu bloklanmasa
	 * bile derleyici tarafından dongunun govdesine
	 * bir blok ekler. Ancak biz bunu goremeyiz.
	 * Cpp ise derleyici zahiri bir blok olusturmaz.
	 * Dolayisiyla main icindeki yazilan kod cpp'da
	 * sentaks hatasidir. 
	 * 
	 *  for(int i = 0; i < 10; ++i)
	 *		printf("%d ", i);
	 *	
	 *	yukaridaki kod derleyici tarafindan asagidaki
	 *  blok icine alinir.
	 *
	 *	for(int i = 0; i < 10; ++i)
	 *  {
	 *		printf("%d ", i);
	 *  }
	 */
	 
	 for(int i = 0; i< 10; ++i)
	 {
		 int i = 99; //C++ gecersiz
		 printf("%d ", i);
	 }
	 
	 // Ekranda 99 99 99 99 99 99 99 99 99 
	 
	 /**
	 * Dolayisisla bilerek ve ya bilmeyerek int i seklinde
	 * bir degisken daha tanimlanirsa scope kurallarindan dolayi
	 * sentaks hatasi olmaz. Ayrica name hiding'den dolayi 
	 * dongunun icindeki i degiskeni kullanilir. İceride kullanilan
	 * i degiskeninin scope'u dongu sonuna kadardir. Ancak for
	 * dongusunde ilk deger verilen i degiskeninin scope'u
	 * derleyicinin olusturdugu zahiri blogun sonuna kadardir. 
	 */
 }