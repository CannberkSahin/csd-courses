/**
 * @file SequencePoint.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
 
 class SequencePoint {

	 public static void main(String [] args)
	 {
		/**
		* Aşağıdaki örnekte ++ ve -- operatörleri aynı ifadede aynı operand için kullanılmıştır.
		* C dilinde bu tanımsız davranıştır ancak Java'da legaldir.
		*/
		int a, b;
		
		a = 10;
		
		b = --a + a++;
		
		System.out.printf("a = %d%n", a);		
		System.out.printf("b = %d%n", b);
		
		a = 10;
		
		b = a-- + ++a;
		
		System.out.printf("a = %d%n", a);		
		System.out.printf("b = %d%n", b);
		
				
		a = 10;
		
		b = a-- + a++ - --a;
		
		System.out.printf("a = %d%n", a);		
		System.out.printf("b = %d%n", b);
	 }
 }