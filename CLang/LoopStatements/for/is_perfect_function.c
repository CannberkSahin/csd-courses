/**
 * @file is_perfect_function.c
 * @author Canberk Sahin
 * @date 11 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 	 /**
	 * Mukemmel sayi (perfect number): kendisi haric tam bolenlerinin
	 * toplami kendisine esit sayilardir.
	 *
	 * Ornek: 6, 28, 4968128
	 *
	 * 6 -> 3,2,1  3+2+1 = 6
	 * 28 -> 1 + 2 + 4 + 7 + 14 = 28
	 *
	 * Her mersenne aslina karsilik tek bir perfect sayi vardir.
	 */
 
 /**
 * Kendisine gelen sayinin mukemmel olup olmadigini
 * test eder. Sayi perfect ise non zero deger dondurur.
 * sayi perfect degisse zero deger dondurur.
 
 * @param val: number
 * @retval zero if number is not perfect, non-zero if
 * number is perfect
 */
 int is_perfect(int val)
 {
	 //bolenlerin toplamini bulmak gerekir
	 int div_sum = 0;
	 
	 for (int i = 0; i<= val / 2; ++i) {
		 if(val % i == 0)
			 div_sum += i;
	 }
	 
	 return val == div_sum;
 }
 
 int main()
 {
	for(int i = 2; i< 10000; ++i)
	{
		if(is_perfect(i))
			printf("%d is perfect!\n", i);
	}
 }