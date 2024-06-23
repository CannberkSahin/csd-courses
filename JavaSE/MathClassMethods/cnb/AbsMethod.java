/**
 * @file AbsMethod.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
 
 class AbsMethod {
	public static void main(String [] args) 	
	{
		/**
		* AbsMethod Javanın Math isimli sınıfında bulunmaktadır.
		* Methoda parametre olarak geçilen sayinin absolute
		* (mutlak) degerini geri dondurmektedir.
		* @param mutlak degeri alinacak sayi
		* @retval parametre olarak aldigi sayinin mutlak degeri.
		*/
		
		java.util.Scanner kb = new java.util.Scanner(System.in);
		System.out.print("Bir sayi giriniz: ");
		double dval = Double.parseDouble(kb.NextLine());
		
		System.out.printf("|%d| = %d%n", a, Math.abs(dval));
	}
 }