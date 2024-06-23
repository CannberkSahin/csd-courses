/**
 * @file is_even_function.c
 * @author Canberk Sahin
 * @date 10 Sep 2020
 *
 * */
 
 #include <stdio.h>
 
 /**
 * Teklik ciftlik testi yapan fonksiyon
 */
 int is_even(int x)
 {
	 //return x % 2 == 0;
	 return !(x % 2);
 
 int main()
 {
	 int ival;
	 printf("Enter a value:);
	 scanf("%d", &ival);
	 
	 printf("Return value: %d\n", is_even(ival));
 }