/**
 * @file pi_number.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * C dilinde bstandart olmayan ancak linux kokenli 
 * sistemlerde standart olan math.h dosyasında 
 * _USE_MATH_DEFINES isimli bir makro tanımlanırsa
 * math.h icinde M_PI isimli makro pi sayısı yerine
 * kullanılabilir. 
 */
 
 #define   _USE_MATH_DEFINES    
 
 #include <math.h> 
 
 /**
 * Eger M_PI makrosu kullanılmak isteniyorsa 
 * #include <math.h> dosyasını include edilmeden
 * once _USE_MATH_DEFINES makrosu define edilmelidir.
 */
 int main()
 {
	int pi = M_PI;
	
	printf("pi = %d\n", pi);
 }