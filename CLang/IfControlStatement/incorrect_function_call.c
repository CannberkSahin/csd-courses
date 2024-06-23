/**
 * @file incorrect_function_call.c
 * @author Canberk Sahin
 * @date 10 Sep 2020
 * @brief If the function call operator is not used, the 
 * function will not be called. However, since the name of 
 * the function is converted to an address, it can be used 
 * in an if statement. This event is called a function to 
 * pointer conversion.
 *
 * @verbatim
 * The FUNCTION_CALL_TEST macro has been written to test 
 * the program. If the code with a function calling operator 
 * is to be run, the macro must be defined, otherwise the 
 * code without the function will be called. Yes Correct will 
 * be printed on the screen because the if statement will 
 * always be true.
 * @endverbatim 
 * */

#include <stdio.h>

//#define FUNCTION_CALL_TEST

/**
* @brief When the function is called, the text func 
* function called is printed on the screen.
*
* @retval It returns 1 for testing purposes. 
* The return value can be set to 0 if desired. In this 
* case, since the if statement will be false, nothing 
* will be written on the screen.
*/
int func(void)
{
	printf("func function called.\n");

	return 0;
}

/**
* @brief Test Driven codes.
*/
int main()
{
#ifdef FUNCTION_CALL_TEST
	if(func())
		printf("Yes, correct\n");
#endif

	/**
	 * warning: the address of 'func' will always evaluate as 'true'
	 * no syntax errors but always true even if the return value is 0.
	 * Function to pointer conversion
	 * */
	if(func)
		printf("Yes, correct\n");
}
