/**
 * @file ndigit_function.c
 * @author Canberk Sahin
 * @date 11 Sep 2020
 *
 * */
 
 #include <stdio.h>
 
 /**
 * Girilen sayinin bassamak sayisini bulur.
 * @param ival: girilen sayi 
 * @return basamak sayisi
 */
 int ndigit_function(int val);
 
 int main()
 {
	 int ival;
	 
	 printf("Bir tam sayi girin: ");
	 scanf("%d", &ival);
	 
	 printf("Girilen sayinin basamak sayisi = %d\n", ndigit_function(ival));
 }
 
 int ndigit_function(int val)
 {
	 if(!val)
		 return 1;
	 
	 int digit_count = 0;
	 
	 while(val)
	 {
		 ++digit_count;
		 val /= 10;
	 }
	 
	 return digit_count;
 }
 
