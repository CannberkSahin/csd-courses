/**
 * @file BitwiseAndOrOperator.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
 
 class BitwiseAndOrOperator {

	 public static void main(String [] args)
	 {
		/**
		* Bitsel AND (&) ve bitsel OR (|) operatörleri tamsayılar ile kullanıldığında 
		* karşılıklı bit değerlerini işleme sokarak değer üretirler.
		*/
		int a = 10; //00000000000000000000000000001010
		int b = 11; //00000000000000000000000000001011
		int c;
		
		c = a & b;  //00000000000000000000000000001010

		System.out.printf("c = 0x%8X%n", c);
		System.out.printf("c = %d%n", c);

		c = a | b;  //00000000000000000000000000001011

		System.out.printf("c = 0x%8X%n", c);
		System.out.printf("c = %d%n", c);
	 }
 }