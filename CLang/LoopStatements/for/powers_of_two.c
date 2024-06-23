/**
 * @file powers_of_two.c
 * @author Canberk Sahin
 * @date 11 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 int main()
 {
	 /**
	 * for dongusu ile dongu degiskeni sadece 
	 * teker teker artmamaktadir. İstenildigi
	 * kadar artan bir dongu degiskeni kullanilabilir.
	 */
	 
	 int i;
	 
	 for(i = 1; i < 1000000000; i += 2)
		 printf("%d\n", i);
	 
	 /**
	 * Yukaridaki kodda i degeri 2'ser
	 * 2'ser artirilmaktadir. Dolayisiyla
	 * 1 milyar'a kadar ikinin kuvvetleri
	 * yazdirilmistir.
	 */
 }