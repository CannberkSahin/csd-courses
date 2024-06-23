/**
 * @file factorial_function.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 
 /**
 * Faktoriyel hesaplamasinda dikkat edilmesi gerekir!
 * İsaretli tams ayilarda tasma tanimsiz davranistir.
 * Faktoriyelde üs alam islemi oldugundan dolayi hizli 
 * olarak tasabilmektedir. 
 *
 * Factorial List
 * 1! = 1
 * 2! = 2
 * 3! = 6
 * 4! = 24
 * 5! = 120
 * 6! = 720
 * 7! = 5040
 * 8! = 40320
 * 9! = 362880
 * 10! = 3628800
 * 11! = 39916800
 * 12! = 479001600
 * 13! = 6'227'020'800  
 * -> 4 byte int siniri = isaretli 2 milyar küsür
 *                        isaretsiz 4 milyar küsür
 * 
 * 14! = 87178291200
 * 15! = 1307674368000
 * 16! = 20922789888000
 * 17! = 355687428096000
 * 18! = 6402373705728000
 * 19! = 121645100408832000
 * 20! = 2'432'902'008'176'640'000
 * -> 8 byte long siniri = isaretli 9 kentilyon küsür
 *                         isaretsiz 18 kentilyon küsür
 * 21! = 51090942171709440000
 * 22! = 1124000727777607680000
 * 23! = 25852016738884976640000
 * 24! = 620448401733239439360000
 * 25! = 15511210043330985984000000
 * 26! = 403291461126605635584000000
 * 27! = 10888869450418352160768000000
 * 28! = 304888344611713860501504000000
 * 29! = 8841761993739701954543616000000
 * 30! = 265252859812191058636308480000000
 * 31! = 8222838654177922817725562880000000
 * 32! = 263130836933693530167218012160000000
 *
 * Not: 4 bytle'lik bir int tam sayisi ile en fazla 12 sayisinin 
 * faktoriyelini tutabiliriz, ve 8 byte'lik long bir veri turu ile
 * en fazla 20 sayisinin faktoriyelini tutabiliriz. 
 */
 
 
 /**
 * Parametresi ile aldıgi int turden 
 * bir tam sayinin faktoriyelini hesaplayan
 * fonksiyon.
 * 
 * @param faktoriyeli hesaplanacak sayi
 * @retval hesaplanan faktoriyel
 */
 int factorial(int val)
 {
	 int result = 1;
	 	 
	 for(int i = 1; i <= val; ++i)
		 result *= i;

	 return result;	 
 }
 
 int main()
 {
	  for(int i = 0; i < 13; ++i) {
		  printf("%2d! = %d\n", i, factorial(i));
	  }
 }
 
 /**
 * 8 byte'lik int turu olan long long turu ile
 * faktoriyel hesaplama asagida ki gibidir:
 *
 *  long long int factorial(int val)
 *  {
 * 	   long long int result = 1;
 *	 	 
 *	   for(int i = 1; i <= val; ++i)
 *		  result *= i;
 * 	
 *	   return result;	 
 *  }
 *
 * int main()
 * {
 *	  for(int i = 0; i < 21; ++i) {
 *		  printf("%2d! = %lld\n", i, factorial(i));
 *	  }
 * }
 */