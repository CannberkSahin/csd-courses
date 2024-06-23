/**
 * @file helloWorld.java
 * @author Canberk Sahin
 * @date 12 Sep 2020
 * @package cnb
 * @class SquareMethod 
 * @brief 
 *
 * @verbatim
 * To show the return value type, a method named square
 * is written in the class named NumberUtil.
 * @endverbatim 
 * */

package cnb;

/**
 *  @class SquareMethod is the class of the main method t
 *  that starts the java program.
 **/
class SquareMethod {

	public static void main(String [] args)
	{
		int result;

		result = NumberUtil.square() * 2;

		System.out.println(result);
	}
}

/**
 *  @class NumberUtil 
 *
 *	@brief 	The method named square, which returns the
 *  square of a number taken from the keyboard, is declared
 *  in a class named NumberUtil.
 * 
 *  @return result: Returns the square of an int number 
 *  from the keyboard.
 **/
class NumberUtil {
	public static int square()
	{
		java.util.Scanner kb = new java.util.Scanner(System.in);
		System.out.println("Enter a value:");

		int val = Integer.parseInt(kb.nextLine());

		int result = val * val;

		/*@brief returns the square of the value of val*/
		return result;
	}
}

