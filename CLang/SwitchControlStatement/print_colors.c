/**
 * @file print_colors.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * Switch deyiminin makrolarla kullanımına bir ornek vermek icin 
 * print color isimli bir fonksiyon yazilmistir.
 */
 
 typedef enum 
 {
	COLOR_BLACK,
	COLOR_WHITE,
	COLOR_RED,
	COLOR_GREEN,
	COLOR_BLUE
 }Colors;

 void printColor(Colors color)
 {
	switch (color) {
		case COLOR_BLACK: printf("Black"); break;
		case COLOR_WHITE: printf("White"); break;
		case COLOR_RED: printf("Red"); break;
		case COLOR_GREEN: printf("Green"); break;
		case COLOR_BLUE: printf("Blue"); break;
		default: printf("invalid color"); break;
	}
 }

 int main()
 {
	Colors color = COLOR_BLACK;
	
	printColor(color);
 }
 
