/**
 * @file unsigned_type_conversion.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * Asagidaki kodlarda int ve unsigned int turden iki degisken
 * tanimlanmistir ve bu iki degisken arasinda buyukluk kiyaslamasi
 * yapilmistir. Bu durumda sonuc y x'den daha buyuk oldugu icin
 * if'in dogru kismina girerek ekrana dogru yazdirilmasi gerekirken
 * ekranda yanlis yazisi yazdirilir. Bunun nedeni x'in turu isaretli
 * int turudur. Isaretli int turu ile isaretsiz int turu isleme sokulursa
 * otomatik tur donusumu yapilarak islem isaretsiz turde yapilacaktir.
 * isaretli türlerde -1 binary sayi sisteminde eger int turu 2 byte ise
 * 1111 1111 1111 1111 seklindedir. Ancak isaretsiz tam sayi turune 
 * donusturuldugunde 1111 1111 1111 1111 degeri aynen kalacaktir ancak
 * artik en bastaki 1 biti isaret biti degildir. Bu durumda x = 65535
 * olmaktadir. y > x karsilastirmasinda 1 > 65536 gibi bir sinama yapildigi
 * icin cevap hayir yanlis olur.
 */
 
 int main()
 {
	int x = -1;
	unsigned int y = 1;
	
	if (y > x)
		printf("evet dogru!\n");
	else
		printf("hayir yanlis!\n");
 }