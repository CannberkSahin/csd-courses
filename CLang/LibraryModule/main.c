/**
 * @file main.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 #include "cutility.h"

 int main()
 {
	/**
	* Test Driver Code
	*/
	int day, mon, year;
	
	printf("gun,ay ve yil olarak tarihi girin: ");
	scanf("%d%d%d", &day, &mon, &year);
	
	switch (day_of_the_week(day, mon, year)) {
		case PAZAR: 	 printf("pazar"); break;
		case PAZARTESI:  printf("pazartesi"); break;
		case SALI:		 printf("sali"); break;
		case CARSAMBA:	 printf("carsamba"); break;
		case PERSEMBE:   printf("persembe"); break;
		case CUMA: 		 printf("cuma"); break;
		case CUMARTESI:  printf("cumartesi"); break;
	}
	
	dline();
 }