/**
 * @file SignOperators.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
 
 class SignOperators {

	 public static void main(String [] args)
	 {
		/**
		* İşaret - aritmetik operatörü tek operandlı (unary) ve 
		* önek (prefix) durumunda bir operatördür.  
		*/
		java.util.Scanner kb = new java.util.Scanner(System.in);
		System.out.print("Bir sayı giriniz:");
		int a = Integer.parseInt(kb.nextLine());		
		int b;
		
		b = -a;
		
		System.out.printf("a = %d%n", a);
		System.out.printf("b = %d%n", b);
		
		/**
		* İşaret + aritmetik operatörü tek operandlı (unary) ve 
		* önek (prefix) durumunda bir operatördür. Bu operatör 
		* operandının değerini üretir.
		*/
		System.out.print("Bir sayı giriniz:");
		int x = Integer.parseInt(kb.nextLine());		
		int y;
		
		y = +x;
		
		System.out.printf("x = %d%n", x);
		System.out.printf("y = %d%n", y);
		
		/**
		* Aşağıdaki örnekte ifade işaret - operatörünün seviyesinde 
		* bulunan operatörlerin sağdan sola (right associative) ele 
		* alınması dolayı geçerlidir.
		*/
		int z;
		
		z = - - - - - - - - - 10;
		
		System.out.printf("z = %d%n", z);
		
		/**
		* Aşağıdaki örneği inceleyiniz.
		*/
		int k, j = 10, m = 20;
		
		k = j - - - - - - - - - - - - - - m; //maximum munc kurali
		
		System.out.printf("k = %d%n", k);
	 }
 }