/**
 * @file AlignmentNumber.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
 
  class AlignmentNumber {
	 public static void main(String [] args)
	 {
		 /**
		 * 	printf metodunda tamsayılar için hizalama yapılabilir. Aşaıdaki 
		 *  örnekte %02d yer tutucusu %2d olarak yazılsaydı hizalama için 
		 *  space karakteri kullanılırdı.
		 */
		 
		 java.util.Scanner kb = new java.util.Scanner(System.in);
		 System.out.print("Gün bilgisini giriniz:");
		 int day = Integer.parseInt(kb.nextLine());
		 System.out.print("Ay bilgisini giriniz:");
		 int month = Integer.parseInt(kb.nextLine());
		 System.out.print("Yıl bilgisini giriniz:");
		 int year = Integer.parseInt(kb.nextLine());
		
		 System.out.printf("%02d/%02d/%04d%n", day, month, year);
		 
		 /**
		 * 	Hizalama hexadecimal ve octal gösterimler için de geçerlidir.
		 */
		 
		 System.out.print("Bir sayı giriniz:");
		 int val = Integer.parseInt(kb.nextLine());
		
		 System.out.printf("val = %08X%n", val);	
	 }
  }