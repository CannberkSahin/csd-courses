/**
 * @file cutility.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
 #include "cutility.h"
 
 /**
 * function to implement tomohiko sakamoto algorithm
 * Bir tarihin haftanın hangi günü oldugunu bulan fonsksiyondur.
 * Ornegin 5 Mayıs 2020 -> Salı
 *
 * @brief Parametreleri ile aldigi bir tarihin haftanın hangi gunu
 * oldugunu hesaplayan fonksiyon.
 * @param d gun
 * @param m ay
 * @param y yil
 * @retval haftanin hangi gun oldugu indeksi
 * 0 ise Pazar
 * 1 ise Pazartesi 
 * 2 ise Sali 
 * 3 ise Carsamba
 * 4 ise Persembe
 * 5 ise Cuma
 * 6 ise Cumartesi 
 */
 int day_of_the_week(int d, int m, int y)
 {
    // array with leading number of days values
    const int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
     
    // if month is less than 3 reduce year by 1
    if (m < 3)
        y -= 1;
     
    return ((y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7);
 }
 
 /**
 * Bazı kodlari ekrana basarken karisiklik olmamasi icin dline
 * fonksiyonu cagirilarak ekrana uzun bir cizgi cektirilir.
 */
 void dline(void)
 {
	printf("\n---------------------------------------------------\n"); 
 }
 
 /**
 * Girilen sayinin bassamak sayisini bulur.
 * @param ival: girilen sayi 
 * @return basamak sayisi
 */
 int ndigit_function(int val)
 {
	 if(!val)
		 return 1;
	 
	 int digit_count = 0;
	 
	 while(val)
	 {
		 ++digit_count;
		 val /= 10;
	 }
	 
	 return digit_count;
 }
 
 
 /**
 * isprime fonksiyonu parametresi ile aldigi bir sayinin 
 * asal olup olmadigini bulan bir fonksiyondur.
 * @param val int turden bir sayi
 * @retval eger ssayi asalsa 1, degilse 0 donduur.
 */ 
 int isprime(int val)
 {
	if (val == 0 || val == 1)
		return 0;
	
	if( val % 2 == 0)
		return val == 2;
	
	if( val % 3 == 0)
		return val == 3;
	
	if( val % 5 == 0)
		return val == 5;
	
	for (int k = 7; k * k <= val ; k +=2)
		if (val % k == 0)
			return 0;
		
	return 1;
 }
 
 /**
 * Bazi uygulamalarda ekran ciktisi cok hizli olmaktadir ve
 * yazilar gorunmemektedir. Bundan dolayi sleep fonksiyonu ile
 * istenildigi kadar bekleme yapilabilir.
 * @param sec beklenilecek saniye degeri 
 */
 void sleep(double sec)
 {
	clock_t start = clock();
	
	while ((double)(clock() - start) / CLOCKS_PER_SEC < sec)
		; //null statement
 }
 
 /**
 * Ekrani silen fonksiyondur.Clear Screen isimlerinin kisaltmasidir.
 */
 void cls(void)
 {
	system("cls");
 }
 
 /**
 *
 */
 