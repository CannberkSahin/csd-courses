/**
 * @file password_entry.c
 * @author Canberk Sahin
 * @date 10 Sep 2020
 * @brief It is a simple C program that prompts the user 
 * to enter a 4-character password.
 *
 * @verbatim
 * The program can be written better using loop statements. 
 * However, what is desired to be done here is to show the 
 * password entered by the user by hiding it on the console.
 * @endverbatim 
 * */

#include <stdio.h>
#include <conio.h>

int main()
{    
	/** 
	* @brief A prompt is given to the user on the screen.
	*/
	printf("Enter a password (4 character):");

	/**
	* @brief Character variables are defined for password 
	* characters. The characters are primitively retrieved
        * from the input buffer.
	*/
	int c1, c2, c3, c4;

	c1 = getch();
	putchar('*');
	c2 = getch();
	putchar('*');
	c3 = getch();
	putchar('*');
	c4 = getch();
	putchar('*');

	//...
	
	/**
	* @brief There may be other codes in the program. 
	* The correctness of the entered password was not questioned. 
	* Only the password entered by the user is printed on the screen.
	*/
	printf("\n password = %c%c%c%c", c1, c2, c3, c4);
}
