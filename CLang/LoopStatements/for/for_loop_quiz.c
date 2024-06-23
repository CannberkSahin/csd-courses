/**
 * @file for_loop_quiz.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 int main()
 {
	 /**
	 * Asagidaki kod calistirilirsa ekrana ne yazar?
	 */
	 int ival = 5; 
	 
	 for(int i = 0; i < ival; i--)
		 printf("canberk\n");
	 
	 /** 
	 * Cevap yukaridaki kod calistirilirsa sonsuz sayida
	 * ekrana canberk yazar. Bunun nedeni int n = 5 
	 * sayisi isaretli türden bir sayi tutmaktadir.
	 * isaretli sayilar azaltma operatörü ile eksi sayilara
	 * dogru gider. Bundan dolayi i degeri surekli 5'den
	 * kucuk olacagi icin sonsuz dongu olusur. 
	 */
	 
	 /**
	 * Asagidaki kodda ya bir karakter eklenerek ya da 
	 * (token degil) bir karakteri degistirerek programin
	 * ekrana 5 kez canberk yazmasini saglayiniz.
	 */
	 int n = 5; 
	 
	 for(int i = 0; i < n; i--)
		 printf("canberk\n");
	 
	 /**
	 * Yukaridaki sorunun bilinen 3 tane cevabi bulunmaktadir.
	 * Birinci cevap: for dongusunde i-- yerine n-- yazilir.
	 * 
	 *	 for(int i = 0; i < n; n--)
	 *	 	printf("canberk\n");
	 *
	 * Ikinci cevap: for dongusundeki i < n ifadesinde i'yerine
	 * i yazilirsa ekranda 5 kez canberk yazar.
	 *
	 *	 for(int i = 0; -i < n; n--)
	 *	 	printf("canberk\n");
	 *
	 * Ucuncu cevap: for dongusundeki i < n ifadesi yerine
	 * i + n yazilarak ekrana 5 kere canberk yazdirilabilir.
	 *
	 *	 for(int i = 0; i + n; n--)
	 *	 	printf("canberk\n");
	 */
	 int c = 5; 
	 
	 for(int i = 0; i + c; i--)
		 printf("canberk\n");
 }