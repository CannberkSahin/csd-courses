/**
 * @file MaximumMunch.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
 
 /**
 * Not: Okunabilirlik/algılanabilirlik açısından tek operandlı operatörleri 
 * genel olarak operandına bitişik yazacağız. İki operandlı operatörleri de 
 * bazı özel ama önemli durumlar dışında operand ile operatör arasında yalnızca 
 * bir tane space karakteri olacak şekilde yazacağız.
 */
 
 class MaximumMunch {

	 public static void main(String [] args)
	 {
		/**
		* Derleyici yukarıdan aşağıya ve soldan sağa olmak üzere anlamlı 
		* en uzun ifadeyi alacak şekilde atomlarına ayırma işlemini yapar 
		* (maximum munch)
		*/
		int a = 10;
		int b = 11;
		int c;
		
		c = a+++b; //c = a++ + b;
		
		System.out.printf("a = %d%n", a);//11
		System.out.printf("b = %d%n", b);//11
		System.out.printf("c = %d%n", c);//21
	 }
 }