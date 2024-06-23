/**
 * @file wrong_int_to_double.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * Bir tam sayinin bir tam sayiya bolunmesinde yine
 * bir tam sayi turunden deger elde edilir. İki tam 
 * sayi bir birine bolünerek sonucu double bir türden
 * degiskene atamak ile sonuc double'a donusmez. Asagida 
 * iki tam sayi bir birine bolünmektedir ve daha sonra 
 * sonuc dval degiskenine atanmaktadir.
 * Test: 
 * input 10 3 -> girilirse
 * output 3   -> cikar.
 */
 
 int main()
 {
	int x, y;
	printf("iki tam sayi girin: ");
	scanf("%d%d", &x, &y);
	double dval = x / y;
	
	printf("dval = %f\n", dval);
	
	/**
	* Eger operandlardan biri sabit ise sabiti double
	* turden yazarak int turu double turune donusturulebilir.
	*/
	int a;
	printf("bir tam sayi girin: ");
	scanf("%d", &a);
	double d = x / 3.;
	
	printf("dval = %f\n", d);
	
	/**
	* Not: isaretli turlerde tasma tanimsiz davranistir.
	* int turu 2 byte olan bir sistemde isaretli turden iki
	* sayinin toplami isaretli int turunun sınır degerlerini 
	* asiyorsa tanımsız davranis olur:
	* x = 20 000 y = 20 000 
	* x + y = 40 000 olur ve sınırı asar.
	* Not: isaretsiz turlerde tasma tanimsiz davranis degildir.
	* İsaretsiz turlerde tasma durumunda degisken 0 degerinden
	* baslayarak devam eder.
	*/
 }