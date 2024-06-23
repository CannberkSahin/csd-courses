/**
 * @file truncate_unsigned_int.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 #include <limits.h>
 
 /**
 * İsaretsiz tam sayi turlerinde tasma oldugunda yüksek 
 * anlamli byte'lar budanarak atilir. Bu isleme truncate_unsigned_int
 * denilmektedir. Ornegin int turunun 2 byte oldugu bir sistemde 
 * 1000 * 1000 isleminin sonucu 1 milyon cikmasi gerekirken sonuc
 * 16960 cikmaktadir. 
 * Hex F4240 = 10000000
 * Hex 4240  = 16960
 */
 
 int main()
 {
    int x = 1000;
	int y = 1000;
	
	printf("sonuc = %d\n", x * y);
 }