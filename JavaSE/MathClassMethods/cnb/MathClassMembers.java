/**
 * @file MathClassMembers.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
 
 class MathClassMembers {

	public static void main(String [] args) 
	{
	   /**
	    * Math sınıfının PI ve E sabit elemanları
	    */
		System.out.printf("PI = %.15f%n", Math.PI);
		System.out.printf("E = %.15f%n", Math.E);
		
		/**
		* Math sınıfının trigonometrik işlemler yapan metotları 
		* radyan ölçü birimi ile çalışırlar. Ranyan ve derece 
		* arasındaki dönüştürmeler için toDegrees ve toRadians 
		* isimli metotlar da Math sınıfında vardır
		*/
		
		java.util.Scanner kb = new java.util.Scanner(System.in);
		System.out.print("Derece değerini giriniz:");
		double a = Double.parseDouble(kb.nextLine());
		
		/**
		* Test: 
		* input: 30
		* output: 0.5000000
		*/
		System.out.printf("sin(%f) = %f%n", a, Math.sin(Math.toRadians(a)));
	}
 }