/**
 * @file clear_input_buffer.c
 * @author Canberk Sahin
 * @date 11 Sep 2020
 *
 * */
 
 #include <stdio.h>
 
 void clear_input_buffer(void);
 
 int main()
 {
	int x, y;
	
	/**
	* Eger input'a 23e gibi bir deger girilirse
	* komut satiri ikinci sayiyi bile girmeden programi
	* sonlandirarak asagidaki ciktiyi verir:
	*	iki sayi girin: 23e
	*	(23, 2646016)
	*
	* Yukaridaki olayi engellemek icin input buffer temizlenir.
	*/
	printf("iki sayi girin: ");
	scanf("%d%d", &x, &y);
	
	printf("(%d, %d)\n", x, y);
	
	/**
	*	printf("iki sayi girin: ");
	*	scanf("%d%d", &x, &y);
  	*   clear_input_buffer();
	*	printf("(%d, %d)\n", x, y);
	*/
 }
 
 /**
 * Standart input buffer'ını temizlemek icin
 * buffer'dan bir karakter alinir eger alinan
 * karakter new line karakterine esit degilse
 * ve ayni zamanda EOF isimli hata koduna esit
 * degilse while'dan cikana kadar buffer'daki 
 * karakterleri teker teker alir.
 */
 void clear_input_buffer(void)
 {
	 int c;
	 
	 while((c = getchar()) != '\n' && c != EOF)
		 ; //buraya {} veya continue gelebilir ayni anlamdadir.
 }
	  