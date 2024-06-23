/**
 * @file infinite_loop_idiom.c
 * @author Canberk Sahin
 * @date 11 Sep 2020
 *
 * */
 
 #include <stdio.h>
 #include <stdlib.h>
 #include <conio.h>
 #include <limits.h>
 
 /**
 * Progrdamda kullanicidan surekli sayi girilmesi 
 * istenmektedir. Sayi girmeye devam etmek icin 'e'
 * tusuna bailacak sayi girimek istenmiyorsa 'h' 
 * tusuna bailacaktir ve kullanici e veya h'dan 
 * baska bir deger giremeyecektir. Daha sonra 
 * program kllanicinin girdigi n adet degerin
 * max, min, ortalama ve toplamini bulacaktir.
 * degerler int girilecek sonuclar int olarak 
 * hesaplanacaktır. Dizi kullanilmayacaktir!
 */
 
 /**
 * Ornek: 
 *	  Tam sayi girecek misiniz (e) (h):
 *    e
 *    -247
 *	  Tam sayi girecek misiniz (e) (h):
 *    e
 *    45674
 *	  Tam sayi girecek misiniz (e) (h):
 *    e
 *    456
 *	  Tam sayi girecek misiniz (e) (h):
 *    e
 *    85
 *	  Tam sayi girecek misiniz (e) (h):
 *    h
 *	  ...
 *
 *    Toplam: 45 sayi girdiniz
 *    Ortalama: 456
 *    min: -784
 *    max: 78965
 */
 
 int main()
 {
	 int c;
	 int ival;
	 int cnt = 0;
	 int sum = 0;
	 int min = INT_MAX;
	 int max = INT_MIN;
	 
	 /**
	 * Kodlari test edebilmek icin sayilari kullanicidan
	 * aliyormus gibi rastgele sayi ureterek sanki kullanici
	 * giris yapiyormus gibi dusunebiliriz.
	 */
	 
	 srand((unsigned)time(0));
	 
	 while(1){
	   printf("Tam sayi girecek misiniz? (e) (h): ");
			 
	   while((c = getch()) != 'e' && c != 'h')
		   ; //null statement
	   
	   printf("%c", c);
	   
	   if(c == 'h')
		   break;
		   
	   printf("\ntam sayiyi girin: ");
	   ival = (rand() % 2 ? 1 : -1) * (rand() % 20000 + 1);
	   sum += ival;
	   printf("%d\n", ival);
	   
	   //1. yontem: min - max bulmada
	   if(ival > max){
		   max = ival;
	   }
	   else if (ival < min){
		   min = ival;
	   }
	   
	   /**
	   * 2. Yontem: min - max bulmada
	   * Burada yukaridaki min ve max degiskenlerine ilk 
	   * deger verilmez.
	   *
	   * if (cnt == 0){
	   *	min = max = ival;
	   * }
	   * else if(ival > max)
	   *	max = ival;   
	   * else if(ival < min)
	   *	min = ival;   
	   */
	   
	   ++cnt;
	 }
	 
	 printf("\n");
	 
	 if(cnt == 0){
		printf("hic sayi girmediniz!\n");
		return 0;
	 }
	 
	 printf("toplam %d sayi giediniz\n", cnt);
	 printf("aritmetik ortalama: %d\n", sum / cnt);
	 printf("min: %d\n", min);
	 printf("max: %d\n", max);
 }