/**
 * @file ShortCircuitBehavior.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
 
 class ShortCircuitBehavior {

	 public static void main(String [] args)
	 {
		/**
		* || operatörünün kısa devre davranışı (short circuit behavior). 
		* Kısa devre davranışı doğru sonuca en çabuk ulaşacak şekilde çalışmaktır	
		*/
		boolean result;
		
		result = Sample.foo() && Sample.bar();
		
		System.out.printf("result = %b%n", result);
		
		/**
		* && operatörünün kısa devre davranışı (short circuit behavior)
		*/
		result = Sample.bar() && Sample.foo();
		
		System.out.printf("result = %b%n", result);
	 }
 }
 
 class Sample {
	public static boolean foo()
	{
		System.out.println("foo");
		
		return true;
	}
	
	public static boolean bar()
	{
		System.out.println("bar");
		
		return false;
	}
 }
 