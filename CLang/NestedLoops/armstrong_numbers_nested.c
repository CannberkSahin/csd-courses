/**
 * @file armstrong_numbers_nested.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * 3 Basamakli armstrong sayilarini bulan 
 * program yazilmistir.
 * 
 * Armstrong sayisi: basamaklarinin küpü toplami
 * kendisine esit olan sayidir.
 * Ornek: abc = a^3 + b^3 + c^3
 *
 * Dort basamakli armstrong sayilari asagidaki gibidir:
 * abcd = a^4 + b^4+ c^4 + d^4
 *
 * 3 basamakli armstrong sayilar: 
 * 153 = 1 + 125 + 27
 * 370 = 27 + 343 + 0
 * 371 = 27 + 343 + 1
 * 407 = 64 + 0 + 343
 */
 
 int main()
 {
	 int val = 100;
	 
	 for(int i = 1; i < 10; ++i) {
		 for(int j = 0 ; j < 10; ++j) {
			 for(int k = 0; k < 10; ++k) {
				 // Bu doguler 100 - 999 arasinda donmektedir.
				 // printf("(%d%d%d) ", i, j, k);
				  if(i * i * i + j * j * j + k * k * k == val)
					  printf("%d\n", val);
				  
				  ++val;
			 }
			 // printf("\n");
		 }
		 //printf("\n***********************************************\n"); 
	 }
 }