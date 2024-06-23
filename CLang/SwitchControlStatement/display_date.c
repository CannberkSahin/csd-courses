/**
 * @file display_date.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * Asagidaki kodlarda switch case kontrol ifadesinin sentaksini gostermek
 * icin ismi display date olan bir fonksiyon yazilmistir. Bu fonksiyon
 * ingilizcede military format denilen formatta bir tarih bilgisi standart
 * output'a yazdirilmaktadir. Military format asagidaki gibidir:
 * ilk once sayi ile gun yazilir hemen sonra ıncı eki yazdirilir: 3rd
 * Sonra bir bosluk yazdirilir. Daha sonra ayın ingilizcedeli üc harfli 
 * kısaltmasi yazdirilir: Feb sonra yine bir bosluk yazdirilir ve son
 * olarak yil yazdirilir.
 */
 
 /**
 * @param day hangi gun oldugu 
 * @param month hangi ay oldugu
 * @param year hangi yil oldugu
 */
 void display_date(int day, int month, int year)
 {
	printf("%02d", day);
	
	switch (day) {
		case 1:
		case 21:
		case 31: printf("st "); break;
		case 2:
		case 22: printf("nd "); break;
		case 3:
		case 23: printf("rd "); break;
		default: printf("th "); break;
	}
	
	switch (month) {
		case 1: printf("Jan "); break;
		case 2: printf("Feb "); break;
		case 3: printf("Mar "); break;
		case 4: printf("Apr "); break;
		case 5: printf("May "); break;
		case 6: printf("Jun "); break;
		case 7: printf("Jul "); break;
		case 8: printf("Aug "); break;
		case 9: printf("Sep "); break;
		case 10: printf("Oct "); break;
		case 11: printf("Nov "); break;
		case 12: printf("Dec "); break;
	}
	printf("%d", year);
 }

 /**
 * display_date fonksiyonunun birim testi. 20 kez ekrana tarih
 * yazdirmaktadir. 
 */
 int main()
 {
	int day, month, year;
	int n = 20;
	
	while(n-- > 0) {
		printf("gun ay yil olarak bir tarih girin : ");
		scanf("%d%d%d", &day, &month, &year);
		display_date(day, month, year);
		putchar('\n');
	}
 }
 
