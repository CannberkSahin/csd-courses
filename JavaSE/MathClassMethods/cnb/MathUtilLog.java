/**
 * @file MathUtilLog.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
 
 class MathUtilLog {

	public static void main(String [] args) 
	{
	   /**
	    * MathUtil sınıfının log metodu
	    */
		java.util.Scanner kb = new java.util.Scanner(System.in);
		System.out.print("Tabanı giriniz:");
		double a = Double.parseDouble(kb.nextLine());
		
		System.out.print("Argümanı giriniz:");
		double b = Double.parseDouble(kb.nextLine());
		
		
		System.out.printf("log(%f, %f) = %f%n", a, b, MathUtil.log(a, b));
	}
 }
 
 class MathUtil {
	 /**
	 * @param taban sayısı
	 * @param logaritması alınacak sayısı
	 * @retval sayının logaritması
	 */
	 public static double log(double a, double b)
	 {
		 return Math.log(b) / Math.log(a);
	 }
 }