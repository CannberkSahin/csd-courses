/**
 * @file CalculateArguments.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
 
 class CalculateArguments {
	 public static void main(String [] args)
	 {
		 /**
		 * Metot çağrısında bir argümana ilişkin ifade önce hesaplanır, 
		 * elde edilen değer ile metot çağrılır. 1(bir)'den fazla
		 * parametreye sahip bir metot çağrısında tüm argümanlara ilişkin 
		 * ifadeler hesaplanır, elde edilen değerler ile metot çağrılır.
		 */
		 
		java.util.Scanner kb = new java.util.Scanner(System.in);
		System.out.print("Birinci sayıyı giriniz:");
		int a = Integer.parseInt(kb.nextLine());
		
		System.out.print("İkinci sayıyı giriniz:");
		double b = Double.parseDouble(kb.nextLine());
		
		Sample.foo(a + 5, b * 2);
		
	 }
 }
 
 class Sample {
	 public static void foo(int a, double b)
	 {
		System.out.println(a);
		System.out.println(b);
	} 
 }
 
 class NumberUtil {
	public static int add(int a, int b)
	{
		return a + b;
	}
	
	public static int square(int val)
	{
		return val * val;
	}
}