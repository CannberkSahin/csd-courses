/**
 * @file PowMethod.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
 
 class PowMethod {
	public static void main(String [] args) 	
	{
		/**
		* PowMethod Javanın Math isimli sınıfında bulunmaktadır.
	    * Parametre olarak aldigi taban ve ust degerlere gore
		* bir sayinin ussunu almaya yarayan metottur.
		* @param taban sayisi
		* @param us sayisi
		* @retval taban olararak girilen sayinin ussu
		*/
		
		java.util.Scanner kb = new java.util.Scanner(System.in);
		System.out.print("Tabanı giriniz:");
		double a = Double.parseDouble(kb.nextLine());		
		
		System.out.print("Üssü giriniz:");
		double b = Double.parseDouble(kb.nextLine());
		
		System.out.printf("pow(%f, %f) = %f%n", a, b, Math.pow(a, b));	
	}
 }