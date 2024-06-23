/**
 * @file swap_function.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * Asagidaki makronun ismi generate swap function kısalmasi 
 * olan gsf'dir. Makro iki tane generic türden degiskeni
 * takas etmeye yarayan swap fonksiyonuna acilmaktadir.
 * Ancak kullanilmak sitenilen ture ait makro comment out
 * yapilarak kullanilabilir diger turden makrolar yorum 
 * satiri yapilmalidir cunku C dilinde function overloading
 * yoktur. Derleyicinin hata vermemesi icin bir yontem 
 * bulunmaktadir.
 */
 
 #define  gsf(t)	void swap_##t(t *p1, t *p2) { \
							  t temp *p1;         \
							  *p1 = *p2;          \
							  *p2 = temp; }       \
	
 /**
 * Asagidaki makrolarda acilim yapılırken oken pasting operatoru sayesinde 
 * makro argumaninda bulunan ture gore ture gore isim belirlenmektedir.
 * Ornek olarak gsf(int); makrosu acildiginda void swap_int(int *p1, int *p2)
 * seklinde bir fonksiyon acilacaktir. Veya gsf(double); makrosu acilirken
 * void swap_double(double *p1, double *p2) seklinde bir fonksiyon acilacaktir.
 * Fonksiyonlarin ismi farkli oldugu icin derleyici hata vermez.
 */ 
 gsf(int);    //burdaki makrolarin acilimindan fonksyonlarin tanimlari olusmaktadir.
 gsf(double);
 gsf(long);

 int main()
 {
	 int a = 10, b = 20;
	 double d1 = 3.4, d2 = 6.8;
	 long l1 = 564, l2 = 895;
	 
	 swap_int(&a, &b);
	 swap_double(&d1, &d2);
	 swap_long(&l1, &l2);
	 
	 printf("a = %d\n", a);
	 printf("b = %d\n", b);
	 
	 printf("d1 = %f\n", d1);
	 printf("d2 = %f\n", d2);
	 
	 printf("l1 = %l\n", l1);
	 printf("l2 = %l\n", l2);
 }