/**
 * @file print_armstrong_number.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
  #include <stdio.h>
  
  /**
  * Armstrong sayisi: basamaklarinin küpü toplami
  * kendisine esit olan sayidir.
  * Ornek: abc = a^3 + b^3 + c^3
  *
  * Dort basamakli armstrong sayilari asagidaki gibidir:
  * abcd = a^4 + b^4+ c^4 + d^4
  *
  * 0 - 999'999'999 araligindaki tüm armstrong sayilarini
  * bulan ve ekrana yazdıran bir C programı yazınız.
  */
  
  /**
  * Fonksiyon prototipleri
  */
  long long int power(long long int base, int exp);
  int ndigit(long long int val);
  int is_armstrong(long long int val);
  
  /**
  * Parametresi ile aldigi sayinin armstrong olup
  * olmadigini test eden fonksiyon.
  * @param long long int turden parametre
  * @retval armstrong sayi ise 1 dondurur, degilse 0 dondurur
  */
  int is_armstrong(long long int val)
  {
	 long long int sum = 0;
	 int digit;

     digit = ndigit(val);

	 while(val)
	 {
		 sum += power(val % 10, digit);
		 val /= 10;
	 }
	 
	 return sum == val;
  }

 /**
 * Us alma fonksiyonu
 * @param taban degeri
 * @param üs degeri
 * @retval üssü alinan sayi
 */
 long long int power(long long int base, int exp)
 {
	 long long int result = 1;
	 
	 while(exp--)
		 result *= base;
	 
	 return result;
 }
 
 /**
 * Paramere olarak gonderilen sayinin kac basamakli 
 * oldugunu bulan fonksiyon.
 * @param basamak sayisi bulanacak sayi
 * @retval basamak sayisi
 */
 int ndigit(long long int val)
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
 * 0 - 999'999'999 sayilari arasinda armstrong sayilarini 
 * bulan is_armstrong fonksiyonunun test kodlari.
 * Program tüm armstrong sayilarini toplamda 10 dakika
 * 36 saniyede bulabilmistir. 
 * Kodları derleyen bilgisayar Asus i7 2. nesil 8 Gb ram
 * Not: Bilgisayar 10 yillik bir laptop.
 * Eğer armstrong sayilarini bulmak icin bir look-up 
 * table kullanilsaydi run time da islem yapilmayacagi 
 * icin cok daha kisa surede armstrong sayilari yazdirilabilirdi.
 */
 int main()
 {
	 for(long long int i = 0; i <= 999999999; ++i)
	 {
		 if(is_armstrong(i))
			 printf("%lld ", i);
	 }
 }