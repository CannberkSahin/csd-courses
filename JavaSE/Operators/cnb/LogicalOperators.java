/**
 * @file LogicalOperators.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
 
 class LogicalOperators {

	 public static void main(String [] args)
	 {
		/**
		* Mantıksal operatörler 3(üç) tanedir: && (AND), || (OR), ! (NOT)
	    * && ve || operatörleri iki operandlı araek durumunda operatörlerdir. 
		* ! operatörü tek operandlı önek durumunda operatördür.
		* Bu üç operatörün de operandları boolean türden olmalıdır. Bu üç 
		* operatörün de ürettiği değer boolean türdendir. Bu operatörler 
		* matematik'teki mantıksal operatörlerdir.
		*
		* && ve || operatörlerinin doğruluk tabloları aşağıdaki gibidir:
		*
		* op1		op2			op1 && op2
		* T			T				T			
		* T			F				F
		* F			T				F
		* F			F				F
		*
		* op1		op2			op1 || op2
		* T			T				T			
		* T			F				T
		* F			T				T
		* F			F				F
		*/
		
      boolean a = true;
      boolean b = false;

      System.out.println("a && b = " + (a && b));
      System.out.println("a || b = " + (a || b) );
      System.out.println("!(a && b) = " + !(a && b));
	 }
 }
 