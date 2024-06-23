/**
 * @file DigitsSumApp.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * javadoc dokumantasyon
 **/
 
 package cnb;
 
 /**
 * Parametresi ile aldığı en fazla 3(üç) basamaklı int türden bir sayının 
 * basamakları toplamını döndüren digitsSum metodunu döngü kullanmadan yazınız. 
 * Metot aldığı argümanın en fazla 3(üç) basamaklı olup olmadığını kontrol 
 * etmeyecektir. Basmaklar toplamı pozitif olarak döndürülecektir.
 */
 
 class DigitsSumApp {
	public static void main(String [] args) 	
	{
		DigitsSumTest.run();
	}
 }
 
 
 /**
 * @class DigitsSumTest
 * Klavyeden 3 basamakli int bir sayi alinir.
 * Alinan sayi NumberUtil sınıfındaki digitSum
 * isimli methoda parametre olarak geçilir. 
 * Methodun donderdigi deger ekrana formatli olarak
 * basilir.
 *
 * Test:
 * Input: 123
 * Output: 6
 *
 * Input: 468
 * Output: 18
 */
 class DigitsSumTest {
	public static void run()
	{
		/**
		* @brief kullanicidan 3 basamakli bir sayi alinarak
		* basamaklari toplami ekrana yazdirilir.
		*/
		java.util.Scanner kb = new java.util.Scanner(System.in);
		System.out.print("Bir sayi giriniz:");
		int val = Integer.parseInt(kb.nextLine());
		
		System.out.printf("%d sayısının basamakları toplamı:%d%n", val, NumberUtil.digitsSum(val));
	}
 }
 
 /**
 * @class 3 basamakli int rurden sayilarin basamaklari toplamini
 * hesaplayan sınıf.
 */
 class NumberUtil {
	 /**
	 * @brief Parametresiyle aldigi 3 basamakli sayinin basamaklari
	 * toplamini dondurur.
	 * @param 3 basamakli int sayi
	 * @retval basamaklari toplami
	 */
	public static int digitSum(int val)
	{	
		int ones = val % 10;
		int	tens = val / 10 % 10;
		int hundreds = val / 100;
		
		//Eger negatif bir sayinin modu alinirsa sonuc negatif olur.
		return Math.abs(ones + tens + hundreds); 
	}
 }
 