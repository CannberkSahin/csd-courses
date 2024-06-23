 /**
 * @file subexpression_ternary_op.c
 * @author Canberk Sahin
 * @date 11 Sep 2020
 *
 * */
 
 #include <stdio.h>

 #define isleap(y)	(y % 4 == 0) && (y % 100 != 0|| y % 400 == 0)
 
 int main()
 {
	 int x = 20;
	 iny y = 10;
	 
	 /**
	 * Asagidaki kodda x eger 10'dan buyukse y'nin
	 * a'ya esitligi sinanmaktadir, degilse y'nin
	 * b'ye esitligi sinanmaktadir. 
	 */
	 if(y == (x > 10 ? a : b)){
		 //...
	 }
	 
	 /**
	 * Asagidaki kodda y yil degerini temsil etmektedir.
	 * y'nin artik yil olmasi durumunda if kosulunun degeri
	 * 366'dir, y'nin artik yil olmamasi durumunda ifadenin
	 * degeri 365'dir. Totaldays'in ya 366'dan yada 365'den
	 * buyuklugu sinanmaktadir. 
	 */
	 int a = 10;
	 int totaldays = 365;
	 
	 if( totaldays > (isleap(y) ? 366 : 365)){
		 ++a;
	 }
	 
	 /**
	 * Yukaridaki kosul operatorunun if olarak yazilmasi:
	 */
	 
	 
	 if( isleap(y)){
		 if(totaldays > 366)
		 {
			 ++a;
		 }
	 }
	 else if (isleap(y) > 365)
	 {
		 ++a;
	 }
 }