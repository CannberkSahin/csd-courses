/**
 * @file macro_guard.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * Onemli not: GCC derleyicisinde statement expression isimli bir
 * extension vardır. Bir compound statement'ı disaridan bir paranteze
 * alirsak yazilan son ifadenin (x > y); ifadesinin degeri anlamina 
 * gelen bir ifade olarak kullanilabilir. 
 *
 * ({
 *	   x++;
 *	   y++;
 *     x > y;
 * })
 *
 * url: https://gcc.gnu.org/onlinedocs/gcc/Statement-Exprs.html
 */ 
 
 #define maxint(a,b) \
  ({int _a = (a), _b = (b); _a > _b ? _a : _b; })
  
 int main()
 {
	int x = 15, y = 10;
	printf("max: %d\n", maxint(x, y));
 }