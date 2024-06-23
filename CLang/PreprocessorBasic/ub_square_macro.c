/**
 * @file ub_square_macro.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * Eger makrolar dikkatli kullanilmazsa tanimsiz
 * davranisa yol acabilir. Asagidaki square makrosu
 * kullanimi ile tanmsiz davranis olusmustur.
 */
 
 #define   square(x)   ((x) * (x))
 
 int main()
 {
	int a = 10;
	int b;
	//...
	
	b = square(a++); //ub
	/**
	* b = ((a++) * (a++))
	*
	* derleyici makroyu yukaridaki gibi acacaktir. 
	* a nesnesi bir yan etki noktasindan (sequence
	* point) önce ayni ifade icinde tekrar kullanilmistir.
	*/
 }
 
 /**
 * Ayrica makro kullanilirken fonksiyon cagirilarinda 
 * dikkat edilmelidir. ORnegin asagidaki kodda kodun anlami
 * degistigi icin makro kullanilmamalidir:
 *
 * int func(void);
 *
 * #define  square(x)   ((x) * (x))
 *
 * int main()
 * {
 *    //int a = square(func());
 *    int a = ((func()) * (func()));
 * }
 *
 * Yukaridaki kodda eger square bir fonksiyon olsaydi 
 * func fonksiyonunun geri donus degeri hesaplanarak 
 * square fonksiyonuna argüman olarak gecilmis olurdu.
 * Ancak square bir makro oldugu icin func fonksiyonuna
 * iki kere cagirilarak geri donus degerleri carpilmis
 * oldu ve kodun anlami degisti.
 */