/**
 * @file define_use_keywords.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * Önislemci komutlari C dilini bilmemektedir.
 * Bu komutlarla C dilindeki anahtar kelimeleri
 * sangi baska sentaks olarak kullaniyormus
 * gibi yazabiliriz. Ancak boyle kodlarin 
 * yazilmasi tavsiye edilmemektedir.
 */
 
 #define  eger	 if
 #define  tamsayi  int
 #define  ata   = 
 #define  buyuk  > 
 
 int main()
 {
	tamsayi x;
	
	x ata 5;
	
	eger(x buyuk 3)
		++x;
		
	printf("%d\n", x);
 }