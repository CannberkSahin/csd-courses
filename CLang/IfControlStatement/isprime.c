/**
 * @file isprime.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
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
 * isprime fonksiyonunun birim testi driver codes.
 * Asagidaki kodlarda klavyeden girilen tam sayi araligindaki
 * kaç asal sayi oldugu bulunmaktadir. 
 */
 int main()
 {
	int low, high;
	int prime_count = 0;
	
	printf("bir tam sayi araligi girin: ");
	scanf("%d%d", &low, &high);
	
	if (low > high) {
		int temp = low;
		low = high;
		high = temp;
	}
	
	for (int i = low; i <= high; ++i) {
		if (isprime(i)) {
			++prime_count;
			printf("%d ", i);
			sleep(0.05);
		}
	}
	
	printf("[%d %d] araliginda %d asal sayi bulundu\n", low, high, prime_count);
 }