/**
 * @file without_macro_argument.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
 
 /**
 * Function like makrolar tanimlanirken makro argumaninin 
 * olmasi zorunlu degildir. Olmayadabilir.
 */
 
 #define   randomize()	 (srand((unsigned int)time(0))
 
 int main()
 {
	randomize();  //srand((unsigned int)time(0))
	
	//...
 }