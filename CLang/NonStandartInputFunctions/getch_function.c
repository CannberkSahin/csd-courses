/*****************************************************************************
 * Copyleft 2020 by Canberk SAHIN
 * 
 * This file is part of CWorkBox.
 *
 * 	WorkBox is a free software exercise that contains 
 * 	code written in C language. You can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public 
 *  License as published by the Free Software Foundation.
 *
 *  Box is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty
 *  of  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
 *
 *  See the GNU Lesser General Public License for more details.              
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
 * @brief Usage example of getch function, which is a 
 * non-standard function in C language.
 *
 * @verbatim
 * The getch function is a function that takes a character
 * from the buffer of the standard input stream. The getch 
 * function does not require a new line. In other words, 
 * it is not a line buffered function.
 * The getch function doesn't give a echo. If the codes 
 * are compiled and run, when the user enters the character 
 * after the prompt asking for the character, the entered 
 * character cannot be seen on the console.
 * @endverbatim 
 * */

#include <stdio.h>
#include <conio.h>

/**
 * @brief Since the getch function is not standard, the conio.h 
 * header file has been added.
 * */

int main()
{
	int c;

	/**
	 * @brief In the code below, a character is taken from the
	 * standard input stream with the getch function. The 
	 * received character doesn't appear on the console.
	 * The ASCII code of the received character 
	 * is given to the standard output stream.
	 * */
	printf("Enter a character: ");
	c = getch();
	printf("c = %d\n", c);
}
