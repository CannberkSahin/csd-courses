/**
 * @file to_value_category.c
 * @author Canberk Sahin
 * @date 11 Sep 2020
 *
 * */
 
 #include <stdio.h>
 
 int main()
 {
	 /**
	 *  Asagidaki if kodlarindan olusan ifadeyi 
	 *  kosul op. ile nasil yazabiliriz?
	 *
	 *	if(x > y)
	 *	  a = z;
	 *  else 
	 *	  b = z;	
     *
	 *  Yukaridaki kodun kosul op. ile yapilan hali
	 *  makrolarda kullanilmaktadir. 
	 */
	 
	 /**
	 *	x > y ? a : b = z;
	 * 
	 *  Yukarida yazilan kodda kosul op. atama op.'den
	 *  daha yuksek oncelige sahip oldugundan ifadenin 
	 *  asagidaki gibi yazilmasina gerek yoktur.
	 *
	 *  (x > y ? a : b) = z;
	 *
	 *  Ancak burada yanlis olan kosul operatorunun 
	 *  ürettigi deger R-Value express. oldugu icin 
	 *  Sag taraf degerinden bir degiskene atama yapilamaz!
	 * 
	 *  Not: Kosul operatorunun urettigi deger bir R-Value expression'dur.
	 */
	 
	 int x = 5, y = 7, a = 34, b = 43, z = 99;
	 
	 (x > y ? a : b) = z;  //illegal code
	 //Error: '=': left operand must be l-value
	 
	 //**Not: C++ dilinde kosul op. urettigi deger l-vaule expression'dur.
 }