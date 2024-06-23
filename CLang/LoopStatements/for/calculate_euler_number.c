/**
 * @file calculate_euler_number.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
  
 /**
 * Asagidaki kodlarda logoritmada gecen euler (e) sayisi
 * bir takim seri acilimi ile hesaplanmaktadir. e sayisinin
 * yaklasik degeri 2.718'dir. Matematiksel olarak:
 * 
 * e = 1 + 1 / 1! + 1 / 2! + 1 / 3! + ... + 1 / n!
 *
 * e sayisi irrasyoneldir ve tam değeri sonlu sayıda 
 * rakam kullanılarak yazılamaz. Seride bulunan 
 * faktoriyel islemi icin faktoriyel fonksiyonu
 * kullanilmistir.
 */	 
 
 /**
 * @param faktoriyeli alinacak sayi
 * @retval parametreye gecilen sayinin faktoriyeli
 */
 int factorial(int val)
 {
	int result = 1;
	
	for(int i = 0; i <= val; ++i)
		result *= i;
	
	return result;
 }
 
 int main()
 {
	  /**
	  * Serinin ilk 13 terimi toplanir. C dilinde int 
	  * turden bir sayi int turden bir sayiya bölünürse
	  * sonuc yine int türden olur. Sonucu double türden 
	  * elde edebilmek icin ya sabit sayinin sonuna . eklenir
	  * yani 1. gibi yapilir ya da int türden ifade type cast 
	  * op. ile double türüne  cevrilir. 
	  */
	  
	  double sum = 0;
	  
	  for(int i = 0; i < 13; ++i)
		  sum += 1. / factorial(i); 
	  
	  printf("sum = %f\n", sum);
 }