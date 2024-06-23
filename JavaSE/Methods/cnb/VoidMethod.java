/**
 * @file VoidMethod.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
  
  
 class VoidMethod {
	 
	 public static void main(String [] Args)
	 {
		NumberUtil.displaySquare();
		
		/*
		* void metotlar geri dönüş değeri varmış gibi çağrılamaz. 
		* Yani void metot çağrısı geri dönüş değeri varmış gibi
		* işleme sokulamaz
		*
		* int result = NumberUtil.displaySquare() * 2; //error
		*/
	 }
 }
 
/**
 * @verbatim
 * void metotlarda return deyimi zorunlu değildir.
 * void metotlarda return deyimi istenirse metodu sonlandırmak 
 * için tek başına kullanılabilir.
 * void metotlarda return deyimi ifade ile kullanılamaz.
 * void metotlar geri dönüş değeri varmış gibi çağrılamaz. 
 * Yani void metot çağrısı geri dönüş değeri varmış gibi
 * işleme sokulamaz
 * @endverbatim
 */

 class NumberUtil {

	public static void displaySquare()
	{
		java.util.Scanner kb = new java.util.Scanner(System.in);
		System.out.print("Bir sayi girin: ");
		
		int val = Integer.parseInt(kb.nextLine());
		
		int result = val * val;
		
		if (val > 0)
			return;
		
		/**
		* 	if (val > 0)
		*	   return 10; //error: 
		*/
		
		System.out.println(val * val);
	}
 }
 
    