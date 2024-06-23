/**
 * @file interview_nested_loop.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * Asagidaki kodda kullanici 180 girerse ekrana ne yazar?
 */
 
 int main()
 {
	 int x;
	 printf("bir tam sayi girin: ");
	 scanf("%d", &x);
	 
	 int n = 2;
	 
	 while (x != 1) {
		 while (x % n == 0) {
			 printf("%d ", n); 
			 x /= n;
		 }
		 ++n;
	 }	

	printf("\n");
 }
 
 /**
 * Cevap: 2 2 3 3 5
 * Yukaridaki kod klasik bir tam sayiyi asal carpanlarina 
 * ayirma kodudur.
 */