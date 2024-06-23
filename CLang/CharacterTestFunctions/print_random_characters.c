/**
 * @file print_random_characters.c
 * @author Canberk Sahin
 * @date 10 Sep 2020
 *
 * */
 
 #include <stdio.h>
 #include <ctype.h>
 #include <stdlib.h> 
 #include <Windows.h>

/**
* Kodlarda kullanilan Sleep fonksiyonu
* Windows isletim sisteminin veridigi
* bir API'dir. Kullanmak icin <Windows.h>
* include edilmelidir.
*/

 int main()
 {
	 while (1)
	 {
		 /**
		 * Karakter test fonksiyonu degistirilerek 
		 * kullanilabilir.
		 */
		 
		 int c = rand() % 128;
		 if(isupper(c))
		 {
			 putchar(c);
			 Sleep(30);
		 }
	 }
 }