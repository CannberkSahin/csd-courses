/**
 * @file print_random_date.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
 #include <conio.h>
 
 /**
 * Asagidaki kodlarda switch case kontrol ifadesinin sentaksini gostermek
 * icin ozellikle switch deyiminin bir kontrol deyiminin icinde de yazilabilecegini
 * gostermek icin kodlar yazilmistir. 
 */
 

 int main()
 {
	srand((unsigned int)time(0));
	
	for (int i = 0; i < 100; ++i) {
		switch (rand() % 7 + 1) {
			case 1: printf("pazartesi\n"); break;
			case 2: printf("sali\n"); break;
			case 3: printf("carsamba\n"); break;
			case 4: printf("persembe\n"); break;
			case 5: printf("cuma\n"); break;
			case 6: printf("cumartesi\n"); break;
			case 7: printf("pazar\n"); break;
		}
		_getch(); //ekrandan echo vermeden bir karakter beklemektedir.
	}
 }
 
