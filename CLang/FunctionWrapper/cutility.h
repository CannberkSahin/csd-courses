/**
 * @file cutility.h
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 /**
 * Multiple inclusion guard
 */
 
 #ifndef  CUTILITY_H
 #define  CUTILITY_H
 
 /*Macro Definitions*/
 #define	isleap(y)	((y) % 4 == 0 && ((y) % 100 != 0 || (y) % 400 == 0))
 
 #define    PAZAR		0
 #define    PAZARTESI	1
 #define    SALI		2
 #define    CARSAMBA	3
 #define    PERSEMBE	4
 #define    CUMA		5
 #define    CUMARTESI	6
 
 /*User Defined Types*/
 
 /*Function Prototype*/
 void dline(void);
 void cls(void);
 void sleep(double);
 
 int isprime(int);
 int ndigit(int);
 int ndigit_function(int val);
 int day_of_the_week(int, int, int);
 
 #endif