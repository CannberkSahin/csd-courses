/**
 * @file nested_loop.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * Asagidaki kod derlenip calistirildiginda ekrana 
 * ne yazmaktadir?
 */
 
 int main()
 {
	 int i, k;
	 
	 for(i = 0; i < 10; ++i)
		 for(k = 0; k < 5; ++k);
			printf("%d %d ", i, k);
 }
 
 /**
 * Cevap: 5 9
 * 
 * Bunun nedini ikinci for dongusunun sonunda noktali virgul
 * ; atomu konulmustur. Bundan dolayi icteki for dongusunun 
 * govdesi null statement olmustur. Bundan dolayi printf ifadesinin
 * for dongulri ile alakasi kalammaktadir. Kou asagidaki gibi
 * dusunebiliriz:
 *
 * 	 for(i = 0; i < 10; ++i)
 *		 for(k = 0; k < 5; ++k);
 *	 
 *	 printf("%d %d ", i, k);
 *
 * Distaki dongunun son turunda i'nin degeri 5 oldugunda 
 * distaki donguden cikilir, icteki donguden de icteki dongunun 
 * son kez yurutulmesi ile k degeri 10 olacak ve donguden cikacaktir.
 * Daha sonra bu degerler printf fonksiyonu ile ekrana bastirilacaktir. 
 */