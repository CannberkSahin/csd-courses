/**
 * @file isleap_year_macro.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * Asagidaki makro bir bir yılın artık yıl olup olmadıgını 
 * sorgulamaktadir.
 */
 
 #define   isleap(y)   ((y) % 4 == 0 ((y) % 100 != 0 || (y) % 400 == 0))
 
 int main()
 {
	int year = 1977;
	
	if(isleap(year))  //((year) % 4 == 0 ((year) % 100 != 0 || (year) % 400 == 0))
		printf("artik yil\n");
	else
		printf("artik yil degil\n");
 }