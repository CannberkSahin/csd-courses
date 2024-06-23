/**
 * @file RoundMethods.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
 
 class RoundMethods {

	public static void main(String [] args) 
	{
	   /**
	    * Math sınıfının yuvarlama işlemi yapan temel metotları
	    */
		java.util.Scanner kb = new java.util.Scanner(System.in);
		System.out.print("Bir sayı giriniz:");
		double val = Double.parseDouble(kb.nextLine());
		
		System.out.printf("round(%f) = %d%n", val, Math.round(val));
		System.out.printf("rint(%f) = %d%n", val, Math.rint(val));		
		System.out.printf("ceil(%f) = %f%n", val, Math.ceil(val));
		System.out.printf("floor(%f) = %f%n", val, Math.floor(val));
	}
 }
 
