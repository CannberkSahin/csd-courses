/**
 * @file iprint_macro.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * Asagidaki makro printf fonksiyonunu wrap'lemistir.
 * Bu makronun amacı yazim kolayligi saglamaktir.
 */
 
 #define   iprint(x)   printf("%d\n", x)
 
 int main()
 {
	int ival;
	printf("bir tam sayi girin: ");
	scanf("%d", &ival);
	
	iprint(ival);
 }
 
 /**
 * Makrolarin kullanim amaclarindan birsi de kompleks 
 * ifadeleri basitlestirmektir. Ornegin asagidaki gibi
 * bir ifade kullaniyor olalim:
 * func(ptr[a + b][x - ?] bu ifadede sadece ? olan yer 
 * degisiyor ancak diger kisimlar sabit kaliyor olsun.
 * Bu durumda ifade asagidaki fibi makroya alinip sadece
 * degisen yeri makro argumani yapilabilir:
 *
 * #define  foo(t)  func(ptr[a + b][x - t]
 */