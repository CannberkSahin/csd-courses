/**
 * @file preprocessor_operators.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * Onislemci programin operatorleri vardır. Toplam 3 adet 
 * operator bulunmaktadır. Bunlara preprocessor operators
 * denilmektedir.
 *
 * # (diyez) operatoru -> stringification / stringizing op. (dizge yapma op)
 * ## (cift diyez) op. -> token pasting (atom yapıştırma operatoru)
 * defined op. (kosullu derleme ile ilgili)
 * 
 */
 
 /**
 * Bir makro aciliminda unary prefix olarak kullanilan # op. 
 * makro acilim listesini cift tirnak icene alinmasini saglar
 * #op  "op"
 */
 
 #define  str(x)   #x
 
 int main()
 {
	printf(str(canberk)); //printf("canberk");
 }
 
