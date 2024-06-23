/**
 * @file magic_number.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * C dilinde sabitler dogrudan kod icinde kullanilirsa
 * sabitin ne anlama geldigini kodlari okuyan programci
 * anlamayabilir. Kodda ne olarak kullanildigi belli olmayan 
 * bu sabitlere "magic number" denilir. Makrolar bu magic 
 * number'ların ne anlama geldigini anlatmalidir. 
 */
 
 #define   ELLAPSED_SECONDS  762567328
 #define   M_PI	3.1415926565475	
 
 int main()
 {
	int minutes;
	
	minutes = ELLAPSED_SECONDS;
	
	printf("%d\n", M_PI);
	
	/**
	* C dilinde hepsi buyuk harf ile secilen isimler
	* yani all caps isimler hic bir zaman degiskenlere
	* verilmez. Verilirse sentaks hatasi olusmaz. Ancak
	* hepsi buyuk harf olan isimler genelde makrolara 
	* verilir. Boylece makronun bir sabit ile yer degistirilecegi
	* anlami ortaya cikar. Dolayisiyla okunabilirlik artmis olur.
	*/ 
	
	/**
	* Not: Eger birden fazla yerde ayni sabiti kullanacaksaniz
	* bu durumda makro kullanilmasi onerilir. Boylece sasbit 
	* degistirilmek istendiginde tek bir makrodan kolayca 
	* degistirilebilir. Aksi halde kodda kullanilan tüm
	* sabitlerin tek tek degistirilmesi gerekir.
	*/
 }