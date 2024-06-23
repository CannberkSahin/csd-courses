/**
 * @file ReturnValue.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
  
 class ReturnValue {
	 
	 public static void main(String [] Args)
	 {
		 int result = Util.getSquare();
		 
		 System.out.println(result);
	 }
 }
 
/**
 * @verbatim
 * Bir metodun geri dönüş değeri başka bir metodun geri 
 * dönüş değeri olarak verilebilir.
 * @endverbatim
 */

 class Util {
	 public static int getSquare()
	 {
		 System.out.println("Kare alma islemi yapiliyor:");
		 
		 return NumberUtil.square();
	 }
 }

 class NumberUtil {

	public static int square()
	{
		java.util.Scanner kb = new java.util.Scanner(System.in);
		System.out.print("Bir sayi girin: ");
		
		int val = Integer.parseInt(kb.nextLine());
		
		int result = val * val;
		
		return result;
	}
 }
 
    