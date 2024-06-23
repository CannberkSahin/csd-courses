/**
 * @file workaround_value_category.c
 * @author Canberk Sahin
 * @date 11 Sep 2020
 *
 * */
 
 #include <stdio.h>
 
 int main()
 {
	 /**
	 * Asagidaki kod C dilinde gecersizdir. Ancak bu kodu
	 * pointer'lar yardimi ile legal hale getirebiliriz.
	 * Böyle durumlara yazilimda workaround denilmektedir.
	 * Anlami bir yolunu bulmakdir hile gibi.
	 * Kodu legal yapabilmek icin kosul operatorunun 
	 * urettigi degeri nesneler degilde bu nesnelerin adresleri
	 * yapilir.
	 */	 
	 
	 int x = 5, y = 7, a = 34, b = 43, z = 99;
	 
	 *(x > y ? &a : &b) = z;
 }