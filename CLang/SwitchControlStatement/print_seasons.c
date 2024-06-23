/**
 * @file print_seasons.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * Asagidaki kodlarda switch case kontrol ifadesinin sentaksini gostermek
 * icin mevsimler yazdirilmistir. Burada gösterilmek istenilen case etiketlerinden
 * sonra break deyimi kulanilmadiginda kod bir sonraki case etiketinden devam 
 * etmektedir. Bunu programcilar bazen bilerek yaparlar bu duruma "fall through"
 * denilmektedir.
 */
 
 
 /**
 * @param mont hangi ayin secilecegi parametredir.
 */
 void print_seasons1(int month)
 {
	switch (month) {
		case 12:
		case 1:
		case 2: printf("kis\n"): break;
		case 3:
		case 4:
		case 5: printf("ilkbahar\n"): break;
		case 6:
		case 7:
		case 8: printf("yaz\n"): break;
		case 9:
		case 10:
		case 11: printf("sonbahar\n"): break;
	}
 }
 
 /**
 * Yukaridaki switch case deyiminin else if karsiligi print_seasons2 fonksiyonunda
 * yazilmistir. 
 *
 * @param mont hangi ayin secilecegi parametredir.
 */
 void print_seasons2(int month)
 {
	if (month == 12 || month == 1 || month == 2)
		printf("winter\n"): break;
	else if (month == 3 || month == 4 || month == 5)
		printf("spring\n"): break;
	else if (month == 6 || month == 7 || month == 8)
		printf("summer\n"): break;
	else if (month == 9 || month == 10 || month == 11)
		printf("autumn\n"): break;
 }
 
 int main()
 {
	int mon;
	
	printf("ayin sira numarasi : ");
	scanf("%d", &mon);
	
	print_seasons1(mon);
	print_seasons2(mon);
 }
 
