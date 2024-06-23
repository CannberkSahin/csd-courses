/**
 * @file PrintfMethod.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
 
 /**
 * 	System.out.printf metodunun ilk argümanı String olmalıdır.  
 *  Metot bu argüman dışında istenilen türde ve istenilen sayıda
 * 	argüman ile çağrılabilmektedir. Metodun birinci parametresine 
 *  ilişkin argümanda % karakteri ile birlikte anlamlı bazı karakterler
 *  kullanıldığında "yer tutucu (placeholder)" belirtilmiş olur. % ile 
 *  birlikte kullanılan bu karakterlere "format karakterleri 
 *  (format specifiers)" denir. Metot format karakterleri yeribe String 
 *  içerisindeki sırasıyla diğer geçilen argümanlara ilişkin değerleri 
 *  koyarak yazıyı elde eder ve ekrana basar. Bazı format karakterleri bir
 *  argümana ilişkin değere karşılık gelmez. Yazı içerisinde başka bir 
 *  anlamı olur.
 *	
 *	Not: printf gibi değişken sayıda argüman alan metotlara "vararg methods" 
 *  da denilmektedir. Burada bu tarz metot yazımı ele alınmayacaktır. 
 *  (Variadic Methods).
 */
 
 class PrintfMethod {
	 public static void main(String [] args)
	 {
		 /**
		 * Tamsayı türlerinin (short, int, long, byte) decimal formatlanması 
		 * için d format karakteri kullanılır. printf metodu ekrana basma 
		 * işleminden sonra imleci bir alt satırın başına geçirmez. Son yazılan 
		 * karakterden bir sonraya çeker. İmleci bir sonraki satırın başına 
		 * geçirmek için n format karakteri ile %n yer tutucusu yazılabilir. 
		 * Bu yer tutucu bir argümana ilişkin değildir.
		 */
		 java.util.Scanner kb = new java.util.Scanner(System.in);
		 System.out.print("Sınav notunuzu girin: ");
		 int grade = Integer.parseInt(kb.nextLine());
		 
		 System.out.printf("Ben sınavdan %d aldım%n", grade);
		 
		 /**
		 * Sınav notlarini ekrana yazdiran kodlar.
		 */
		 System.out.print("Vize notunuzu giriniz:");
		 int midTermGrade = Integer.parseInt(kb.nextLine());
		 System.out.print("Final notunuzu giriniz:");
		 int finalGrade = Integer.parseInt(kb.nextLine());
		 
		 System.out.printf("Vize:%d%nFinal:%d%n", midTermGrade, finalGrade);
		 
		 /**
		 * printf metodu x, X, h, H format karakterleri ile tamsayı türleri 
		 * hexadecimal olarak formatlanabilir. Ayrıca o (küçük o) format karakteri 
		 * ile tamsayı türleri octal olarak formatlanabilir 
		 */
		 System.out.print("Bir sayı giriniz:");
		 int val = Integer.parseInt(kb.nextLine());
		
		 System.out.printf("val = %x%n", val);
		 System.out.printf("val = %X%n", val);
		 System.out.printf("val = %h%n", val);
		 System.out.printf("val = %H%n", val);
		 System.out.printf("val = %o%n", val);
		 
		 /**
		 * printf metodunda gerçek sayılar (double ve float) için f format 
		 * karakteri kullanılabilir. printf metodunda f format karakteri ile
         * ondalık kısmın kaç basamak olarak gösterileceği aşağıdaki gibi 
		 * belitilebilir. Geri kalan basamaklar bilimsel olarak yuvarlanır.
		 */
		 
		 System.out.print("Bir sayı giriniz:");
		 double dval = Double.parseDouble(kb.nextLine());
		
		 System.out.printf("val = %.10f%n", val);	 
	 }
 }