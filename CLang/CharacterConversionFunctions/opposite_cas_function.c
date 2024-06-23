/**
 * @file opposite_case_function.c
 * @author Canberk Sahin
 * @date 10 Sep 2020
 *
 * */
 
 #include <stdio.h>
 #include <ctype.h>
 #include <stdlib.h> 
 
 /**
 *	Girilen karakterin tersini almaktadir. Eger
 * kucuk harf gonderilirse geri donus degeri gonderilen
 * karakterin buyuk harf karsiligidir. Eger buyuk harf
 * girilmisse geri donus degeri gonderilen karakterin
 * kucuk harf karsiligidir.Eger harf girilmezse karakterin
 * kendini dondurur.
 */
 int op_case(int c)
 {
	 if (isupper(c))
		 return tolower(c);
	 
	 if(islower(c))
		 return toupper(c);
	 
	 return c; //redundant else yapma!!
 }
 
 int main()
 {
	 int ch;
	 
	 printf("Bir karakter girin: ");
	 ch = getchar();
	 
	 printf("%c ---> %c\n", ch, op_case(ch));
 }
 
 /**
 * Mulakat sorusu: Yukaridaki op_case fonksiyonunun
 * kodlarindan hangi iki satir silinirse kodun anlami
 * degismez?
 * Cevap: 25 ve 28 silinirse kodun anlami degismez.
 */
 
 /**
 * int op_case(int c)
 * {
 *	 if (isupper(c))
 *		 return tolower(c);
 *
 *	 return toupper(c);
 * }
 */