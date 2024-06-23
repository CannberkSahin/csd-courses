/**
 * @file multiple_declaration_for.c
 * @author Canberk Sahin
 * @date 11 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 int main()
 {
	 /**
	 * dor dongusunun ilk kisminda birden fazla bildirim
	 * yapilabilir.
	 */
	 
	 for(int i = 0, int k = i + 2; i * k < 1000; ++i, k += i)
		 printf("%d %d\n", i, k); 
	 
	 // Yukaridaki kodda kullanilan virgul operatordur ve sol tarafin
	 // once yapilmasi garanti altindadir. Not: virgul op. bir 
	 // sequence point olusturur.
 }