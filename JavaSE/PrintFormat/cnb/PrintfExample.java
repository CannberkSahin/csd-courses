/**
 * @file PrintfExample.java
 * @author Canberk Sahin
 * @date 14 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
 
 class PrintfExample {
	public static void main(String [] args)
	{		
	    java.util.Scanner kb = new java.util.Scanner(System.in);
		System.out.print("Arasınav notunuzu giriniz:");
		int midTermGrade = Integer.parseInt(kb.nextLine());
		System.out.print("Final notunuzu giriniz:");
		int finalGrade = Integer.parseInt(kb.nextLine());
		
		double result = 0.4 * midTermGrade + 0.6 * finalGrade;
		
		System.out.printf("Arasınav:%d, Final:%d => Sonuc:%.2f%n", midTermGrade, finalGrade, result);
	}
 }