/**
 * @file token_pasting.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * Token pasting operatoru ## binary bir op'dür.
 * a ## b  ab -> on islemci sol ve sag operandlari
 * birlestirerek tek bir ifade haline getirmektedir.
 */
 
 #define  unify(a, b)  a##b
 
 int main()
 {
	int counter = 0;
	
	++unify(cou, nter);
	
	printf("counter = %d\n", counter); 
 }