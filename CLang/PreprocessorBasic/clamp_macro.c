/**
 * @file clamp.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * Clamp bir aralik icin (low ve high bir aralik) eger x'in degeri
 * low'dan kucukse clamp degeri low olur. Eger x'in degeri high'dan
 * buyukse clamp degeri high olur. Ancak bunlarin dısındaki degerler
 * icin yani x low ile high arasinda ise clamp degeri kendi degeridir.
 *
 * low 10, high 30 ise x = 5 ise clamp 10'dir.
 * low 10, high 30 ise x = 45 ise clamp 30'dur.
 * low 10, high 30 ise x = 24 ise clamp 24'dür.
 */
 
 /**
 * Algoritma: clamp sayisi ile kucuk sayidan buyuk olan alinir. Bu sayede
 * eger clamp sayisi kucuk sayidan kucukse kucuk sayi alinacaktir ancak 
 * clamp sayisi kucuk sayidan buyukse araliktaki clamp sayisi alinacaktir.
 * Daha sonra elde edilen deger ile buyuk sayisindan kucuk olani alinir.
 * Eger elde edilen sayi buyuk sayisindan kucukse aradaki deger olmus olur
 * ama elde edilen sayi buyuk sayisindan buyukse bu sefer buyuk sayi alinir.
 */
 
 #define   max(a, b) 	((a) > (b) ? (a) : (b))
 #define   min(a, b) 	((a) < (b) ? (a) : (b))
 
 #define   clamp(x, low, high)    (min((high), max((low), (x))))
 
 int main()
 {
	int x, high, low;
	
	printf("Buyuk sayiyi girin: ");
	scanf("%d", &high);
	printf("Kucuk sayiyi girin: ");
	scanf("%d", &low);
	printf("clamp sayisini girin: ");
	scanf("%d", &x);
	
	printf("clamp sayisi: %d\n", clamp(x, low, high));
 }