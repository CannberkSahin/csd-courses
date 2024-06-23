/**
 * @file nested_macros.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * C dilinde makroları tanımlarken bir makro icerisinde
 * baska bir makro tanimlanabilir. Ornek olarak asagidaki
 * makrolarda maksimum ve minumum degerler icin makrolar 
 * tanimlanmistir. Max ve min'e baglı olarak hesaplanan 
 * ve ortalamayi bulan Mean makrosu tanimlanmıistir.
 */
 
 #define   MAX    1024
 #define   MIN    8
 #define   MEAN   ((MAX + MIN) / 2)
 
 int main()
 {
	int MEAN; //((1024 + 8) / 2);
	
	printf("%d\n", MEAN);
	
	//MAX = 1562; error makrolar degisken degildir.
 }