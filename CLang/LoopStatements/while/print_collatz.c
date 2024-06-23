/**
 * @file print_collatz.c
 * @author Canberk Sahin
 * @date 11 Sep 2020
 *
 * */
 
 #include <stdio.h>
 
 int print_collatz(unsigned long long n);
 
 int main()
 {
	 unsigned long long uval;
	 
	 printf("Bir tam sayi girin: ");
	 scanf("%llu", &uval);
	 
	 int n = print_collatz(uval);
	 
	 printf("\n n = %d\n", n);
 }
 
 /**
 * Collatz kalıtı matematikte unlu bir kalıttır.
 * Bir sayi alinir, bu sayi tek ise yeni sayi
 * uretmek icin sayinin uc kati alinarak bir toplanir.
 * Eger sayi cift ise sayi iki ile carpilir.
 * Boyle boyle 1 kalana kadar bir seri elde edilmektedir.
 *
 *	Ornek: 23 -> tek  23 * 3 + 1 = 70
 *		   70 -> cift 70 / 2 = 35
 *	       35 -> tek  35 * 3 + 1 = 106
 *		  106 -> cift 106 / 2 = 53
 *  	   53 -> tek  53 * 3 + 1 = 160
 *		  160 -> cift 160 / 2 = 80
 *		   80 -> cift 80 / 2 = 40
 * 		   40 -> cift 40 / 2 = 20
 *		   20 -> cift 20 / 10 = 5
 *			5 -> tek  5 * 3 + 1 = 16
 *		   16 -> cift 16 / 2 = 8
 *		    8 -> cift 8 / 2 = 4
 *			4 -> cift 4 / 2 = 2
 *          2 -> cift 2 / 1 = 1
 *
 *	Ozet olarak klavyeden alinan n degerine gore 
 *  collatz serisinin acilmasini yazdiran bir 
 *  fonksiyondur.
 */
 int print_collatz(unsigned long long n)
 {
	 int cnt = 1;
	 
	 while(n != 1){
		 printf("%llu ", n);
		 
		 if(n % 2 == 0)
			 n /= 2;
		 else
			 n = n * 3 + 1;
		 
		 ++cnt;
	 }
	 
	 printf("1\n");
	 
	 return cnt;
 }