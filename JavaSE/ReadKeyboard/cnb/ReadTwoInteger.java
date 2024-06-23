 /**
 * @file ReadTwoInteger.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class ReadTwoInteger
 * */
 
 package cnb;
 
 class ReadTwoInteger {
	 public static void main(String [] Args)
	 {
		 /**
		 * Birden fazla deger okunurken iki adet Scanner
		 * nesnesine gerek yoktur. Tek bir Scanner nesnesin
		 * yeterlidir. 
		 */
		 java.util.Scanner kb = new java.util.Scanner(System.in);
		 
		 System.out.print("Birinci sayi giriniz: ");
		 int a = Integer.parseInt(kb.nextLine());
		 
		 System.out.print("ikinci sayiyi giriniz:");
		 int b = Integer.parseInt(kb.nextLine());
		 
		 int result = a * b;
		 
		 System.out.println(result);
	 }
 }