/**
 * @file NotOperator.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
 
 class NotOperator {

	 public static void main(String [] args)
	 {
		/**
		* ! operatörü flag değişkenlerle aşağıdaki gibi kullanılabilir.
		*/
		boolean flag = true;

		//..

		flag = !flag;

		System.out.printf("flag = %b%n", flag);
	 }
 }