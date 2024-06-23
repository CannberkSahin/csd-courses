/**
 * @file nonblock_switch.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
 #include <conio.h>
 
 /**
 * Switch deyimi bloklanmadan da kullanilabilir. Ancak bu durumda switch deyiminden
 * sonra if ve dongu deyimlerindeki gibi tek bir ifadenin yazilmasi gerekmetedir.
 */
 

 int main()
 {
	int a = 10, b = 20;
	
	switch (a) 
		printf("canberk\n");
		
	// Yukaridaki switch deyiminin ozdesi
	if (a == 1)
		printf("canberk\n");
		
	switch (b)
		case 1: printf("canberk\n"); //sentaks hatasi yok.
		
	/**
	* C mulakatkarinda sorulan bir sorunun uc cevabindan birisi asagidaki gibidir.
	* ekrana bir isim yazdirin ancak bunu yaparken ; atomunu kullanmayin:
	*/
	switch (printf("canberk\n")) {
		
	}
 }
 
