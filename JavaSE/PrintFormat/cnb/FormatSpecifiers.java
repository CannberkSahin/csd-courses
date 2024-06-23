/**
 * @file FormatSpecifiers.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
 
 class FormatSpecifiers {
	public static void main(String [] args)
	{
		/**
		* printf metodunda char türü için c format karakteri kullanılır.
		*/
		char ch = 45987;
		
		System.out.printf("ch = %c%n", ch);
		
		/**
		* printf metodunda boolean türü için b format karakteri kullanılır. 
		*/
		boolean flag = false;
		
		System.out.printf("flag = %b%n", flag);	
		
		/**
		* printf metodunda yukarıda anlatılan format karakterleri uygun 
		* tür için kullanılmazsa genel olarak exception oluşur.
		*/
		int a = 10;
		
		System.out.printf("a = %f%n", a);
		
		/**
		* printf metodunda % karakterinin gösterilebilmesi için bitişik 
		* olarak iki tane % kullanılmalıdır.
		*/
		java.util.Scanner kb = new java.util.Scanner(System.in);
		System.out.print("Oranı giriniz:");
		double ratio = Double.parseDouble(kb.nextLine());
		
		System.out.printf("Oran:%% %f%n", ratio);
		System.out.printf("Oran:%%%f%n", ratio);
	}
 }