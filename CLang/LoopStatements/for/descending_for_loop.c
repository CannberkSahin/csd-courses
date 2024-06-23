/**
 * @file descending_for_loop.c
 * @author Canberk Sahin
 * @date 11 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 int main()
 {
	 /**
	 * for dongusu ile azalan degerleri azalan
	 * dongude olusturulabilir.
	 */
	 
	 int i;
	 
	 for(i = 10; i >= 0; --i)
		 printf("%d ", i);
	 
	 /**
	 * Yukaridaki kodda i 10 degeri ile baslayacaktir
	 * 10 - 0 sayilarini yan yana ekrana basacaktir.
	 * Dikkat: burada donguden cikabilmek icin dongu
	 * degiskeninin isaretli tam sayi olmasi gerekiyor
	 * aksi taktirde isaretsiz i degeri 0'da kalcagi 
	 * icin sonsuz dongu olusur. 
	 *
	 *	 unsigned int i;
	 *
	 *   for(i = 10; i >= 0; --i)
	 *	     printf("%d ", i);
	 */
 }