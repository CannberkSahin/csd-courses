/**
 * @file MethodCallOperator.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
 
 class MethodCallOperator {

	 public static void main(String [] args)
	 {
		/**
		* Metot çağırma operatörü
		*/
		int result;
		
		result = NumberUtil.add(10, 20) * 2;
		
		System.out.printf("result = %d%n", result);	
	 }
 }
 
 class NumberUtil {
	 /**
	 * @brief parametreleri ile aldigi iki int turden sayinin 
	 * toplamini geri donduren metot.
	 * @param int sayi
	 * @param int sayi
	 * @retval iki sayinin toplami
	 */
	public static int add(int a, int b)
	{
		return a + b;
	}
}