/**
 * @file sequence_point.c
 * @author Canberk Sahin
 * @date 11 Sep 2020
 *
 * */
 
 #include <stdio.h>
 
 int main()
 {
	 int x = 20;
	 int a = 5;
	 
	 /**
	 * Kosul operatoru bir sequence point olusturdugu
	 * icin asagidaki ifadede x'in degerinin bir artmasi
	 * garanti altindadir. Undefined behavior yoktur.
	 * (kosul op. 1. operatorundan sonra bir sequnce 
	 * point olmasisidir).
	 */
	 printf("%d\n", x++ > 10 ? x : a;
 }