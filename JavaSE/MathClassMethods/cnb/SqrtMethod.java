/**
 * @file SqrtMethod.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
 
 class SqrtMethod {
	public static void main(String [] args) 	
	{
		/**
		* SqrtMethod Javanın Math isimli sınıfında bulunmaktadır.
		* Methoda parametre olarak geçilen sayinin karekokunu
		* (square root) degerini geri dondurmektedir.
		* @param karekoku alinacak sayi
		* @retval parametre olarak aldigi sayinin karekoku
		*/
		
		java.util.Scanner kb = new java.util.Scanner(System.in);
		System.out.print("Bir sayi giriniz: ");
		double dval = Double.parseDouble(kb.NextLine());
		
		/**
		* Not: sqrt metodu negatif argümanlar için NaN değerine
        * geri döner
		*/
		System.out.printf("|%f| = %f%n", a, Math.sqrt(dval));
	}
 }