/**
 * @file infinite_loop_idiom.c
 * @author Canberk Sahin
 * @date 11 Sep 2020
 *
 * */
 
 #include <stdio.h>
 #include <conio.h>
 
 /**
 * Programlama yaparken evet(e) icin e'ye 
 * hayir(h) h'ye basin gibi secenek sunulacagi
 * zaman kullanıciya e veya h'den baska tusa
 * basmasini engelleyen sonsuz dongu idiyomu.
 */
 
 int main()
 {
	 int c;
	 
	 printf("evet mi (e) hayir mi (h) ");
	 
	 /**
	 * Asagidaki kod idiyomatik degildir. Pek tercih edilmez.
	 *
	 * while(1)
	 * {
	 * 	 c = getch();
	 *	 
	 *	 if(c == 'e' || c == 'h')
	 *		break;			 
	 * }
	 */
	 
	 //idiyomatik hali asagidaki gibidir.
	 while((c = getch()) != 'e' && c != 'h')
		 ; //null statement
	 
	 /**
	 * Yukaridaki kodda kısa devre davranisi ve sequence
	 * point kavramlarindan yararlanilmistir. 
	 * Eger ve operatorunun soö tarafinin once yapilma 
	 * garantisi olmasaydi ve sol operandadan sonra bir
	 * sequence point olmasaydi tanimsiz davranis olusabilirdi.
	 */
	 
	 printf("\n%c\n", c);
	 
	 if(c == 'e')
		 printf("evet dediniz!\n");
	 else
		 printf("hayir dediniz!\n");
 }