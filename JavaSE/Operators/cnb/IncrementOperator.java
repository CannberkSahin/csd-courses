/**
 * @file IncrementOperator.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
 
 class IncrementOperator {

	 public static void main(String [] args)
	 {
		/**
		* ++ operatörü tek operandlı ve hem prefix hem de postfix 
		* olarak kullanılabilen bir operatördür. Bu operatörün 
		* prefix ya da postfix kullanımı durumunda operandına ilişkin 
		* değişkenin içerisindeki değeri 1(bir) artırır (increment).
		*/
		int a;
		
		a = 10;
		
		++a; //a = a + 1;
		
		System.out.printf("a = %d%n", a);
		
		/**
		* Bu operatörün prefix ya da postfix kullanımı durumunda 
		* operandına ilişkin değişkenin içerisindeki değeri 1(bir) artırır.
		*/
		int b;
		
		b = 10; 
		
		b++; //b = b + 1;
		
		System.out.printf("b = %d%n", b);
		
		/**
		* ++ operatörünün prefix kullanımında ürettiği değer (işleme giren değer) 
		* artırılmış değerdir
		*/
		int x, y;
		
		x = 10;		
		y = ++x;
		
		System.out.printf("x = %d%n", x);		
		System.out.printf("y = %d%n", y);
		
		/**
		* ++ operatörünün postfix kullanımında ürettiği değer (işleme giren değer) 
		* artırılmamış değerdir
		*/
		int k, z;
		
		k = 10;		
		z = k++;
		
		System.out.printf("k = %d%n", k);		
		System.out.printf("z = %d%n", k);
	 }
 }