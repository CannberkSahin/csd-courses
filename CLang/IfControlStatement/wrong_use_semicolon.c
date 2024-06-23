/**
 * @file wrong_use_semicolon.c
 * @author Canberk Sahin
 * @date 10 Sep 2020
 * @brief If a semicolon atom is accidentally or intentionally 
 * placed at the end of the if control statement, it means 
 * that nothing is done inside the if statement. The written 
 * code is understood by the compiler as 
 * if (ival % 2 == 0)
 *	    ;
 * printf("yes even number\n");
 *
 * The semicolon used in the code is called a null statement.
 *
 * @verbatim
 * It can be used without blocking if a single expression 
 * statement is to be used within the if control statement. 
 * However, sometimes programmers accidentally put a semicolon 
 * at the end of the if statement. In this case, the meaning 
 * of the code may change. Whether the code flow enters the 
 * correct part of the if or the wrong part, yes, even number 
 * will be printed on the console.
 * @endverbatim 
 * */
 
#include <stdio.h>

int main()
{
	/**
	* An integer type variable is defined and taken from 
	* the user at runtime.
	*/
	int ival;
	printf("Enter a integer: ");
	scanf("%d", &ival);

       /**
	* Text is printed to the console regardless of the if 
	* statement.
	*/
	if (ival % 2 == 0);  //semicolon is a null statement
		printf("yes, even number\n");
}
