/**
 * @file MinMaxApp.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
 
 class MinMaxApp {

	public static void main(String [] args) 
	{
	   /**
	    * Math sınıfının min ve max metotları ile 3 tane sayının 
		* en büyüğünün ve en küçüğünün bulunması
	    */
		java.util.Scanner kb = new java.util.Scanner(System.in);
		System.out.print("Birinci sayıyı giriniz:");
		int a = Integer.parseInt(kb.nextLine());
		
		System.out.print("İkinci sayıyı giriniz:");
		int b = Integer.parseInt(kb.nextLine());
		
		System.out.print("Üçüncü sayıyı giriniz:");
		int c = Integer.parseInt(kb.nextLine());
		
		System.out.printf("min(%d, %d, %d) = %d%n", a, b, c, Math.min(Math.min(a, b), c));
		System.out.printf("max(%d, %d, %d) = %d%n", a, b, c, Math.max(Math.max(a, b), c));
	}
 }