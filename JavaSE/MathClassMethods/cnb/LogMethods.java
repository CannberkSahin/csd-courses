/**
 * @file LogMethods.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
 
 class LogMethods {

	public static void main(String [] args) 
	{
	   /**
	    * Math sınıfının logXXX metotları
	    */
		java.util.Scanner kb = new java.util.Scanner(System.in);
		System.out.print("Bir sayı giriniz:");
		double a = Double.parseDouble(kb.nextLine());		
		
		/**
		* Test:
		* input: 2.71 (e sayisi)
		* output: 1'e yakınsayacak
		*/
		System.out.printf("log(%f) = %f%n", a, Math.log(a));		
		System.out.printf("log10(%f) = %f%n", a, Math.log10(a));
		System.out.printf("log1p(%f) = %f%n", a, Math.log1p(a));
	}
 }