/**
 * @file GetValueFromKeyboard.java
 * @author Canberk Sahin
 * @date 12 Sep 2020
 * @package cnb
 * @class GetValueFromKeyboard 
 * @brief Java program that gets values from keyboard (console)
 *
 * @verbatim
 * The codes show how to get integer and double values from 
 * the keyboard.
 * @endverbatim 
 * */


package cnb;

class GetValueFromKeyboard {

	public static void main(String [] args)
	{
		/*@brief Create keyboard object for a to get the value*/
		java.util.Scanner kb = new java.util.Scanner(System.in);

		/*@brief get a integer from the keyboard*/
		System.out.print("Enter a integer:");
		int val = Integer.parseInt(kb.nextLine());

		int square = val * val;

		System.out.println(square);

		/*@brief get a double val. from the keyboard*/
		System.out.print("Enter a first double value:");
		double a = Double.parseDouble(kb.nextLine());

		System.out.print("Enter a second double value:");
		double b = Double.parseDouble(kb.nextLine());

		double result = a * b;

		System.out.println(result);	
	}
}	
