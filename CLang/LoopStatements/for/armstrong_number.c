/**
 * @file armstrong_number.c
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
	 //Asagidaki algorima brute-force'dur.
	 
	 for(int i = 100; i < 1000; ++i){
		 int d1 = i / 100;     //yuzler
		 int d2 = i / 10 % 10; //onlar
		 int d3 = i % 10;      //birler
		 
		 if(i == d1*d1*d1 + d2*d2*d2 + d3*d3*d3)
			 printf("%d\n", i);
	 }
	 
	 /**
	 * 4 basamakli armstrong sayilari icin asagidaki
	 * kod yazilabilir.
	 *
	 * 	 for(int i = 1000; i < 10000; ++i){
	 *      int d1 = i / 1000;      //binler 
	 *	    int d2 = i / 100 % 10;  //yuzler
	 *	    int d3 = i / 10 % 10;   //onlar
	 *	    int d4 = i % 10;        //birler
	 *	 
	 *	    if(i == d1*d1*d1*d1 + d2*d2*d2*d2 + d3*d3*d3*d3 + d4*d4*d4*d4)
	 *		    printf("%d\n", i);
	 * }
	 */
		 
 }