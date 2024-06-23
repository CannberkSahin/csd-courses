/**
 * @file DecrementOperator.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
 
 class DecrementOperator {

	 public static void main(String [] args)
	 {
		/**
		* -- operatörü tek operandlı ve hem prefix hem de postfix olarak 
		* kullanılabilen bir operatördür. Bu operatörün prefix ya da postfix 
		* kullanımı durumunda operandına ilişkin değişkenin içerisindeki 
		* değeri 1(bir) azaltılır (decrement).
		*/
		int a;
		
		a = 10;
		
		--a; //a = a - 1;
		
		System.out.printf("a = %d%n", a);
		
		/**
		* Bu operatörün prefix ya da postfix kullanımı durumunda 
		* operandına ilişkin değişkenin içerisindeki değeri 1(bir) azaltılır.
		*/
		int b;
		
		b = 10; 
		
		b--; //b = b - 1;
		
		System.out.printf("b = %d%n", b);
		
		/**
		* -- operatörünün prefix kullanımında ürettiği değer (işleme giren değer) 
		* azaltılmış değerdir
		*/
		int x, y;
		
		x = 10;		
		y = --x;
		
		System.out.printf("x = %d%n", x);		
		System.out.printf("y = %d%n", y);
		
		/**
		* -- operatörünün postfix kullanımında ürettiği değer (işleme giren değer) 
		* azaltılmamış değerdir
		*/
		int k, z;
		
		k = 10;		
		z = k--;
		
		System.out.printf("k = %d%n", k);		
		System.out.printf("z = %d%n", k);
	 }
 }