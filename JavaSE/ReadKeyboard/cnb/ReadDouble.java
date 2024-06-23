 /**
 * @file ReadDouble.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class ReadDouble
 * */
 
 package cnb;
 
 class ReadDouble {
	 public static void main(String [] Args)
	 {
		 /**
		 * Klavyeden Double türünden bir deger okumak
		 * icin Double.parseDouble metodu kullanilir. 		 
		 */
		 java.util.Scanner kb = new java.util.Scanner(System.in);
		 
		 System.out.print("Birinci sayi giriniz: ");
		 double a = Double.parseDouble(kb.nextLine());
		 
		 System.out.print("ikinci sayiyi giriniz:");
		 double b = Double.parseDouble(kb.nextLine());
		 
		 double result = a * b;
		 
		 System.out.println(result);
	 }
 }