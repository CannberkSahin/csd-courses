/*****************************************************************************
 * Copyleft 2020 by Canberk SAHIN
 * 
 * This file is part of CWorkBox.
 *
 * 	WorkBox is a free software exercise that contains 
 * 	code written in C language. You can redistribute it and/or
 *      modify it under the terms of the GNU Lesser General Public 
 *      License as published by the Free Software Foundation.
 *
 *      Box is distributed in the hope that it will be useful,
 *      but WITHOUT ANY WARRANTY; without even the implied warranty
 *      of  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
 *
 *      See the GNU Lesser General Public License for more details.              
 *
 * 	You should have received a copy of the GNU Lesser General 
 * 	Public  License along with Box.  
 * 	If not, see <http://www.gnu.org/licenses/>.
 *
 ****************************************************************************/
 
/**
 * @file getchar_function.c
 * @author Canberk Sahin
 * @date 9 Sep 2020
 * @brief Example of locking the keyboard to enter capital letters. 
 * Letters entered from A to Z appear in the console, but lowercase
 * letters or numbers entered from the keyboard do not appear in 
 * the console. To exit the program, the 'q' character must be 
 * entered from the keyboard.
 *
 * @verbatim
 * It is a program written to give an example of the getch input 
 * function. The getch function requires a new line and it gives also echo.
 * In the program, only capital letters entered from the keyboard appear
 * on the console. Small letters entered from the keyboard do not appear on 
 * the console. In fact, none of the characters and numbers entered from the 
 * keyboard except uppercase letters appear on the console. The 'q' character 
 * must be entered to exit the console screen.
 * @endverbatim 
 * */

#include <stdio.h>
#include <conio.h>

/**
 * @brief Since the getche function is not standard, the conio.h 
 * header file has been added.
 * */

int main()
{
	while(1)  /** infinite loop*/
	{
		int c = getch(); /** get a single char input buffer*/

       	       /** @brief Query that only allows capital letters 
		*   to be entered from the keyboard 
		*/
		if(c >= 'A' && c <= 'Z') 
		{
			/**Entered capital letters are printed on the console*/
			putchar(c);  
		}

		/** @brief To break the infinite loop, the character
		*	q must be entered from the keyboard. 
		*/
		if(c == 'q')
		{
			break;
		}
	}
}
