/**
 * @file armstrong_number_lookup_table.c
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
  long long int armstrong_number(int val);
  
  /**
  *  0 - 999'999'999 araligindaki armstrong sayilarinin
  * lookup tablosunu iceren fonksiyon.
  * @param armstrong sayisinin sira numarasi
  * @retval armstrong sayisi
  */
  long long int armstrong_number(int val)
{
	const long long int armstrong_lut[] = {
		0,
		1,
		2,
		3,
		4,
		5,
		6,
		7,
		8,
		9,
		153,
		370,
		371,
		407,
		1634,
		8208,
		9474,
		54748,
		92727,
		93084,
		548834,
		1741725,
		4210818,
		9800817,
		9926315,
		24678050,
		24678051,
		88593477,
		146511208,
		472335975,
		534494836,
		912985153, //trailing coma	 
	};

	return armstrong_lut[val];
}

 /**
 * 0 - 999'999'999 sayilari arasinda armstrong sayilarini 
 * ekrana yazdiran armstrong number fonksiyonunun test kodlari.
 * Program tüm armstrong sayilarini ekrana toplam 3 saniye
 * icinde yazdirmistir. Hiz olarak lookup table cok verimlidir.
 * Eger bellekte yer konusunda sıkıntı yoksa lookup table
 * kullanilmasi tavsiye edilmektedir.
 */
int main()
{
	for (int i = 0; i < 32; ++i)
	{
		printf("%lld ", armstrong_number(i));
	}
}