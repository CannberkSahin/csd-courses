/**
 * @file define_prep_newline.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * Makro tanimlarken makro isminden sonra
 * gele ifadenin alt satirdan devam etmesini 
 * istiyorsak ifadenin sonuna ters bölü \
 * karakteri eklenmelidir. Yer degistime 
 * islemi eger bir sabit ile yapiliyorsa
 * boyle olusturulan makrolara
 * "symbolic constant" denilir.  
 * Ve ya "manifest constant" ve ya 
 * "object like" macro denilir. 
 */
 
 #define   MAX		(100 + 200 \
 + 300) 
 
 int main()
 {
	 /**
	 * MAX = (100 + 200 + 300) 
	 * int max = (100 + 200 + 300);
	 */
	 int max = MAX; 
	 
	 printf("%d\n", max);
 }