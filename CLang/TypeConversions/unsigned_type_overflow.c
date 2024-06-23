/**
 * @file unsigned_type_overflow.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 #include <limits.h>
 
 /**
 * İsaretsiz tam sayi turlerinde tasma yoktur. Bu turlerde her zaman 
 * moduler aritmetik devreye girer.Yani sonucun ne cikacagi bastan 
 * bellidir.
 */
 
 int main()
 {
	unsigned int uval = UINT_MAX;
	printf("uval = %u\n", uval);
	
	/**
	* Asagidaki kodlarda uval degiskeninin degeri sinir degerinde 
	* oldugu icin tasmadan sonra degeri 0 olur. C dilinde isaretsiz
	* turden tasmada asagidaki gibi bir islem yapilir:
	* n = bit sayisi value % 2^n degerin iki uzeri n'e bolumunden 
	* kalan elde ederiz.
	*/
	printf("uval = %u\n", uval + 1); //sonuc 0
	printf("uval = %u\n", uval + 2); //sonuc 1
 }