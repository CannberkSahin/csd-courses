/**
 * @file MinMaxMethod.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
 
 class MinMaxMethod {

	public static void main(String [] args) 
	{
	   /**
	    * Math sınıfının min ve max metotları
	    */
		java.util.Scanner kb = new java.util.Scanner(System.in);
		System.out.print("Birinci sayıyı giriniz:");
		int a = Integer.parseInt(kb.nextLine());
		
		System.out.print("İkinci sayıyı giriniz:");
		int b = Integer.parseInt(kb.nextLine());
		
		System.out.printf("min(%d, %d) = %d%n", a, b, Math.min(a, b));
		System.out.printf("max(%d, %d) = %d%n", a, b, Math.max(a, b));
	}
 }