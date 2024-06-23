/**
 * @file ternary_op_idiom.c
 * @author Canberk Sahin
 * @date 11 Sep 2020
 *
 * */
 
 #include <stdio.h>
 
 int main()
 {
	 int ival;
	 printf("bir tam sayi girin: );
	 scanf("%d", &ival);
	 
	 /**
	 * Asagidaki kodun anlami eger ival'in degeri
	 * 5 ise x' atanan deger 18'dir. Yok eger ival'in 
	 * degeri 13 ise x'e atanan deger 27 degilse x'e
	 * atanan deger 9 olur. İStenildigi kadar artirilabilir.
	 */
	 int x = ival == 5  ? 18 : 
		     ival == 13 ? 27 : 9;
	
	 printf(x = %d\n", x);
	 
	/**
	* Yukaridaki kod karmasik ilk deger vermelerde yada fonksiyonlarin
    * karmasik return ifadelerinde tercih edilen bir idiom'dur.
	*/
 }