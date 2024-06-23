/**
 * @file CompareOperators.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
 
 class CompareOperators {

	 public static void main(String [] args)
	 {
		/**
		* Temel karşılaştırma operatörleri 6(altı) tanedir. Bu operatörlerin 
		* hepsi binary ve infix durumunda operatörlerdir. Bu operatörlerin 
		* operandlarına yan etkisi yoktur. Bu operatörlerin ürettiği değer 
		* boolean türdendir. Karşılaştırmanın doğru ise true, yanlış ise false
		* değerini üretirler.
		*/
		java.util.Scanner kb = new java.util.Scanner(System.in);
		System.out.print("Birinci sayıyı giriniz:");
		int a = Integer.parseInt(kb.nextLine());
		
		System.out.print("İkinci sayıyı giriniz:");
		int b = Integer.parseInt(kb.nextLine());
		
		System.out.printf("%d > %d -> %b%n", a, b, a > b);
		System.out.printf("%d < %d -> %b%n", a, b, a < b);		
		System.out.printf("%d >= %d -> %b%n", a, b, a >= b);
		System.out.printf("%d <= %d -> %b%n", a, b, a <= b);
		System.out.printf("%d == %d -> %b%n", a, b, a == b);
		System.out.printf("%d != %d -> %b%n", a, b, a != b);
	 }
 }