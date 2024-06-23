/**
 * @file ModOperatorFloating.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
 
 class BasicOperators {

	 public static void main(String [] args)
	 {
		/**
		* Mod operatörünün birinci operandı negatif ise sonuç hep negatif çıkar. 
		* İkinci operandının negatif olmasının bir önemi olmaz. Adeta mutlak değeri 
		* kullanılmış olur. Birinci operandının negatif olması durumunda pozitif 
		* olduğunda elde edilen sonucun negatifi üretilir
		*/
	 	java.util.Scanner kb = new java.util.Scanner(System.in);
		System.out.print("Birinci sayıyı giriniz:");
		int x = Integer.parseInt(kb.nextLine());
		
		System.out.print("İkinci sayıyı giriniz:");
		int y = Integer.parseInt(kb.nextLine());		
		
		System.out.printf("%d %% %d = %d%n", x, y, x % y);
		
		/**
		* Java'da mod operatörü gerçek sayılar için de kullanılabilir.
		*/
		System.out.print("Birinci sayıyı giriniz:
		double a = Double.parseDouble(kb.nextLine());
		 
		System.out.print("İkinci sayıyı giriniz:");
		double b = Double.parseDouble(kb.nextLine());		
		
		System.out.printf("%f %% %f = %f%n", a, b, a % b);
	 }
 }