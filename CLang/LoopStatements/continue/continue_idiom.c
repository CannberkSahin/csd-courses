/**
 * @file continue_idiom.c
 * @author Canberk Sahin
 * @date 11 Sep 2020
 *
 **/
 
 #include <stdio.h>
 #include <conio.h>
 
 /**
 * Asagidaki kod, klavyeyi e ve h haricindeki
 * tuslara kapatmaktadir. Klavyeden e veya h 
 * disinda her hangi bir deger ve ya harf
 * girildiginde ekranda hic bir sey yazmaz.  
 */
 
 int main()
 {
	 int c;
	 
	 printf("evet mi (e) hayir mi (h): ");
	 
	 while((c = _getch()) != 'e' && c != 'h')
		 continue; //dongunun govdesinde hic bir sey yapma yada {} yazilir.
	 
	 printf("\n%c\n", c);
	 
	 if(c == e)
		 printf("Evet dediniz\n");
	 else
		 printf("Hayir dediniz\n");
 }