/**
 * @file print_asterisks.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * Kullanicidan alinan satir sayisi mikrarına gore
 * ekranda girilen satir sayisi kadar yildiz yazdiran
 * programi yazdiriniz. Örenğin kullanici satir sayisini
 * 5 girerse ilk satirda tek yildiz, ikinci satirda iki
 * yildiz, ucuncu satirda uc yildiz, dorduncu satirda
 * dort yildiz ve besinci satirda bes yildiz yazdirilacaktir:
 *
 *   satir saisini giriniz:
 *	 5
 *   
 *   Program ciktisi:
 * 
 *   *
 *   **
 *   ***
 *   **** 
 *   *****
 */
 
 int main()
 {
	 /**
	 * Kodu yazabilmek icin satir sayisi kadar donen bir dongu
	 * olusturup bu dongunun icinde de n adet yildiz yazilacagi 
	 * icin baska bir dongu deyimine gerek vardir.
	 */
	 
	 int n;
	 
	 printf("Satir sayisini girin: ");
	 scanf("%d", &n);
	 
	 for(int i = 1; i <= n; ++i) {
		 for(int k = 0 ; k < i; ++k) {
			 putchar('*');
		 }
		 putchar('\n');
	 }
 }