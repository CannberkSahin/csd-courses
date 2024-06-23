/**
 * @file nested_ternary_op.c
 * @author Canberk Sahin
 * @date 11 Sep 2020
 *
 * */
 
 #include <stdio.h>
 
 int main()
 {
	 int x = 10, y = 20, z = 30, t = 40;
	 
	 //Right associative 
	 //x > y ? z : t > 10 ? 7 : 9;
	 x > y ? z : (t > 10 ? 7 : 9);
	 
	 /**
	 * Eger bir ifadade ic ice kosul op. varsa
	 * ilk olarak sağdaki ifade yapilir. Daha
	 * sonra soldaki kosul operatoru yapilir. 
	 */
 }