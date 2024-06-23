/**
 * @file multiply_loop_varable.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * Asagidaki kodda icteki dongunun gövdesi, dongulerin
 * donus sayilarinin yani tur sayilarinin carpimi 
 * kadardir. 
 */
 
 int main()
 {
	 int cnt = 0;
	 
	 for(int i = 0; i < 10; ++i) {
		 for(int j = 0; j < 20; ++j) {
			 for(int k = 0; k < 5; ++k) {
				 ++cnt;
			 }
		 }
	 }
	 
	 printf("cnt = %d\n", cnt);
 }