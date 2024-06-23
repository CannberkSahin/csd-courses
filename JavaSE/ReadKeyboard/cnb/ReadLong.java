 /**
 * @file ReadLong.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class ReadLong
 * */
 
 package cnb;
 
 class ReadDouble {
	 public static void main(String [] Args)
	 {
		 /**
		 * Klavyeden Long türünden bir deger okumak
		 * icin Long.parseLong metodu kullanilir. 		 
		 */
		 java.util.Scanner kb = new java.util.Scanner(System.in);
		 
		 System.out.print("Birinci sayi giriniz: ");
		 long a = Long.parseLong(kb.nextLine());
		 
		 System.out.print("ikinci sayiyi giriniz:");
		 long b = Long.parseLong(kb.nextLine());
		 
		 long result = a * b;
		 
		 System.out.println(result);
	 }
 }