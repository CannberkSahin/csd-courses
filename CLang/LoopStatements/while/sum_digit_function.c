/**
 * @file sum_digit_function.c
 * @author Canberk Sahin
 * @date 11 Sep 2020
 *
 * */
 
 #include <stdio.h>
 
 /**
 * Girilen sayinin bassamaksal toplamini hesapla.
 * @param ival: girilen sayi 
 * @return basamak sayisinin toplami
 */
 int sum_digit_function(int val);
 
 int main()
 {
	 int ival;
	 
	 printf("Bir tam sayi girin: ");
	 scanf("%d", &ival);
	 
	 printf("Girilen sayinin basamaklari toplami = %d\n", sum_digit_function(ival));
 }
 
 int sum_digit_function(int val)
 {
	 int sum = 0;
	 
	 while(val != 0){
		 sum + = val % 10;
		 val /= 10;
	 }
	 
	 return sum;
 }
 
