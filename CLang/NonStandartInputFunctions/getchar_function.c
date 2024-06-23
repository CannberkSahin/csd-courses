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
 * @brief Usage example of getchar function, which is a 
 * non-standard function in C language.
 *
 * @verbatim
 * 	The gechar function is a function that takes a character
 *      from the buffer of the standard input stream. Getchar requests
 *      a newline. In other words, it is a line buffered function.
 *      At the same time, it writes the echo of the character named
 *      from the standard input stream to the standard output stream.
 *      In other words, it shows the character it receives on the
 *     console screen. It is called a function that gives an echo.
 * @endverbatim 
 * */
#include <stdio.h>
#include <conio.h>

/**
 * @brief Since the getchar function is not standard, the conio.h 
 * header file has been added.
 * */

int main()
{
	int c; /** Declare a character variable for the member getchar function. */

	/**
	 * @brief In the code below, a character is taken from the
	 * standard input stream with the getchar function. The 
	 * received character appears in the console thanks to the 
	 * getchar function. The ASCII code of the received character 
	 * is given to the standard output stream.
	 * */

	printf("Enter a character: "); /** A prompt is given to the console. */
	c = getchar();     
	printf("c = %d\n", c);
}
