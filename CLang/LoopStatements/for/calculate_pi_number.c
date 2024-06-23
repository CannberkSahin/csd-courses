/**
 * @file calculate_pi_number.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
  
 /**
 *  1 - 1/3 + 1/5 - 1/7 + 1/9 ...
 *  Yukaridaki seri pi/4'e yakinsamaktadir.
 *  Asagidaki kodlarda seri acilimi yapilarak
 *  ve 4 ile carpilarak pi sayisi elde edilmişsir. 
 *
 *  1    -> 0. indeks cift topla
 *  1/3  -> 1. indeks tek  cikar
 *  1/5  -> 2. indeks cift topla
 *  1/7  -> 3. indeks tek  cikar
 *  1/9  -> 4. indeks cift topla
 *
 *  pi sayisinin hesplanmasinda en etkili algoritma
 *  Chudnovsky kardeşler'in buldugu Chudnovsky algoritmasidir.
 *  link: https://www.craig-wood.com/nick/articles/pi-chudnovsky/
 */
 
 int main()
 {
	 int n;
	 
	 printf("Serinin kac terimi toplansin: ");
	 scanf("%d", &n);
	 
	 double sum = 0.;
	 
	 for(int i = 0; i < n; ++i) {
		 
		 // ciftse toplaniyor, tekse cikariliyor.
		 if(i % 2 == 0)
			 sum +=  1. / (2 * i + 1);
		 else
			 sum -=  1. / (2 * i + 1);
	 }
	 
	 printf("pi sayisi %.12f\n", 4 * sum);
 }