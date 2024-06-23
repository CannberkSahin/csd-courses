/**
 * @file offsetof_macro.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 #include <stddef.h>
 
 /**
 * offsetof makrosu c dilinde bulunan standart bir makrodur ve stddef.h
 * dosyasinda bulunmaktadir. Makro asagidaki gibi tanimlanmistir.
 * #define offsetof(type, element) ((size_t)&(((type *)0)->element))
 * Fonksiyonel yapıda olan bu makro, bir yapı veya bileşim veri türü 
 * içinde yer alan değişkenin offset adres değerini size_t türünde bir 
 * sabit tamsayı olarak geri döndürür.
 */
 
 typedef struct PodTag
 {
	int i;
	double d;
    char c;
 } PodType;
 
 int main()
 {
    printf("%lu", offsetof(PodType, c));
 }