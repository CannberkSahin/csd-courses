/**
 * @file popular_c_question.c
 * @author Canberk Sahin
 * @date 11 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * Noktali virgul ; kullanmadan ekrana merhaba
 * dunya yazdiran bir program yaziniz?
 */
 
 int main()
 {
	 /**
	 * ; null statement kullanilan her yerde {} ici
	 * bos bir blok ta kullanilabilmektedir. 
	 */
	 
	 /**
	 * Bu program 3 farkli sekilde yazilabilir.
	 */
	 
	 /**
	 * 1. "merhaba dunya" yazisi if deyimin dogru
	 * kismina alinir, printf fonk. geri donus degeri
	 * ekrana basilan karakter sayisi yani bir tam sayi
	 * olduguna gore ifade if'in dogru kismina girecektir.
	 */
	 
	 if(printf("Merhaba Dunya\n"))
	 {}
 
 	 /**
	 * 2. "merhaba dunya" yazisi while deyimin dogru
	 * kismina alinir, boylece printf'in geri donus 
	 * degeri 14 olacaktir ve while deyiminin dogru
	 * kismina girecektir. Dikkat burada sonsuz dongu
	 * olusur. Bunu egellemek icin kosul ifadesinin 
	 * lojik degili alinabilir. Boylece ekrana bir 
	 * kere yazi yazdirilir ve kosul yanlis olacagi
	 * icin donguden cikilir.
	 */
 
	 while(!printf("Merhaba Dunya\n"))
	 {}
 
  	 /**
	 * 3. "merhaba dunya" yazisi switch deyimin dogru
	 * kismina alinir, boylece printf'in geri donus 
	 * degeri 14 olacaktir ve switch deyiminin dogru
	 * kismina girecektir. 
	 */
	 
	 switch(printf("Merhaba Dunya\n"))
	 {}
 }