/**
 * @file day_of_year.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>

 
 /**
 * Asagidaki kodlarda yilin gununu bulan dayOfYear isimli bir fonksiyon
 * yazilmistir. Bu fonksiyon bir tarihi gun ay yil olarak almaktadir ve
 * o tarihin ilgili yilin kacinci gunu oldugunu hesaplamaktadir. 
 * Fonksiyona ornegin 26 5 2020 tarihi gecilirse fonksiyonun geri donus
 * degeri 2020 yilinin 5. ayinn 26. gunun yilin kacinci gunu oldugu 
 * bilgisini geri dondurmektedir. Kod switch deyimini gostermek icin
 * yazilmistir. Boyle bir durumda daha cok look-up table kullanilmaktadir. 
 */
 
 /**
 * @param y yil degerini almaktadir.
 * @return artik yilsa 1 degilse 0 
 */
 int isleap(int y)
 {
	return y % 4 == 0 && (y % 100 != 0 || y % 400 == 0);
 }
 
 /**
 * @param day gun degeri
 * @param month ay degeri
 * @param year yil degeri
 * @return yilin kacinci gunu oldugu degeri
 */
 int dayOfYear(int day, int month, int year)
 {
	int sum = day;
	
	switch(month - 1) {
		case 11: sum += 30; //fallthrough
		case 10: sum += 31; //fallthrough
		case 9: sum += 30; //fallthrough
		case 8: sum += 31; //fallthrough
		case 7: sum += 31; //fallthrough
		case 6: sum += 30; //fallthrough
		case 5: sum += 31; //fallthrough
		case 4: sum += 30; //fallthrough
		case 3: sum += 31; //fallthrough
		case 2: sum += 28 + isleap(year); //isleap(year) ? 29 : 28;
		case 1: sum += 31; 
	}
 }

 int main()
 {
	int day, month, year;
	int n = 5;
	
	while (n-- > 0) {
		printf("gun ay yil olarak bir tarih girin: " );
		scanf("%d%d%d", &day, &month, &year);
		printf("%d yilinin %d. gunu!\n", year, dayOfYear(day, month, year));
	}
 }
 
