 /**
 * @file ReadKeyboard.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class ReadKeyboard
 * */
 
 package cnb;
 
 class ReadKeyboard {
	 public static void main(String [] Args)
	 {
		 /**
		 * Scanner sınıfı turunden bir nesne yaratilmistir.
		 * Bu nesne yaratilirken standart input'a yonlendiriliyor.
		 */
		 java.util.Scanner kb = new java.util.Scanner(System.in);
		 
		 /**
		 * Not: Java'da klavyeden okunan hersey yazidir yani String'dir.
		 */
		 
		 //int turden deger okuma
		 System.out.print("Bir sayi giriniz: ");
		 int val = Integer.parseInt(kb.nextLine());
		 
		 int square = val * val;
		 System.out.println(square);
		 
		 /** 
		 * Not sayi disinda bir deger girilirse exception olusur.
		 * Eger kod derlendiginde uyari gelirse kb.close(); kodu
		 * eklenerek uyari giderilir. Ancak standart input'a yonlendirilmis
		 * nesneyi kapatmak gerekmez.
		 */
		 
		 
	 }
 }