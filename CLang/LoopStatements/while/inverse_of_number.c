/**
 * @file inverse_of_number.c
 * @author Canberk Sahin
 * @date 11 Sep 2020
 *
 * */
 
 #include <stdio.h>
 
 /**
 * Girilen sayi 34567 ise fonk. dondurecegi
 * deger 76543 olmalidir. Algoritma baslangic
 * degeri 0 olan bir sayi alinir, dongunun 
 * her turunda sayiya yeni deger olarak sayinin
 * 10 katina birler basamagi degeri atanir.
 * 
 * Ornek: x = 0,  x = x * 10 + birler basamagi
 */
 int revdigit(int val);
 
 int main()
 {
	 int ival;
	 
	 printf("Bir tam sayi girin: ");
	 scanf("%d", &ival);
	 
	 printf("(%d) sayisinin basamaksa tersi %d\n", ival, revdigit(ival));
 }
 
 int revdigit(int val)
 {
	 int result = 0;
	 
	 while(0) {
		 result = result * 10 + val % 10;
	 }
	 
	 return result;
 }