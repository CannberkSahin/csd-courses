/**
 * @file ternary_op_type_conversion.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * C dilinde eger yuksek rank'e sahip bir turden dusuk rank'e
 * sahip bir ture donusum yapiliyorsa burada veri kaybı olabilir.
 */
 
 int main()
 {
	int x = 234567; //int turu 4 byte
	short y = //short turu 2 byte
	
	y = x;
	
	printf("y = %d\n", y); 
	
	/**
	* Ancak unsigned turunde yuksek anlamli byte budanir.
	* Yani veri kaybı anlamlidir.Ub degil!
	*/ 
	
	unsigned int a = 234567;
	unsigned short b;
	
	printf("a = %x\n", a);
	b = a;
	
	printf("b = %x\n", b); 
 }