/**
 * @file PointUtilClassApp.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * javadoc dokumantasyon
 * */
 
 package cnb;
 
 /**
 * Parametresi ile aldığı double türden x1, y1, x2, y2 
 * koordinat bilgilerine göre iki nokta arasındaki  
 * ((x1, y1) ve (x2, y2)) uzaklığa geri dönen distance 
 * isimli metodu PointUtil isimli sınıf içerisinde 
 * yazınız ve klavyeden girilen değerlerle çağırarak 
 * test ediniz
 */
 class PointUtilClassApp {
	public static void main(String [] args) 	
	{
		DistanceTest.run();
	}
 }
 
 /**
 * @class DistanceTest
 * iki nokta arasindaki uzakligi hesaplayan 
 * PointUtil sinifinin distance isimli metodunun
 * test kodlarini yazildigi siniftir.
 * run isimli static bir metodu vardir.
 *
 * Test:
 * Input: 100 50 200 50
 * Output: 100.000
 *
 * Input: 2 3 6 6
 * Output: 5.000
 */
 class DistanceTest  {
	 /**
	 * @brief kullanicidan x1,y1,x2,y2 degerlerini alarak
	 * sonucu ekrana yazdiran metot
	 */
	 public static void run()
	 {
		java.util.Scanner kb = new java.util.Scanner(System.in);
		
		System.out.print("x1?");
		double x1 = Double.parseDouble(kb.nextLine());
		
		System.out.print("y1?");
		double y1 = Double.parseDouble(kb.nextLine());
		
		System.out.print("x2?");
		double x2 = Double.parseDouble(kb.nextLine());
		
		System.out.print("y2?");
		double y2 = Double.parseDouble(kb.nextLine());
		
		System.out.printf("Distance: = %.3f%n", PointUtil.distance(x1, y1, x2, y2));
	 }
 }
 
 /**
 * @class iki nokta arasindaki uzakligi hesaplayan
 * sinif. 
 */
 class PointUtil {
	 /**
	 * @param x1,y1,x2,y2 noktalari
	 * @retval iki nokta arasindaki uzaklik.
	 */
	 public static double distance(double x1, double y1, double x2, double y2)
	 {
		return Math.sqrt(Math.pow(x1 - x2, 2) + Math.pow(y1 - y2, 2))
		
		/**
		* 2.yontem
		* return Math.sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
		*
		* 3.yontem
		* double dx = x1 - x2;
		* double dy = y1 - y2;
		*
		* return Math.sqrt(dx * dx + dy * dy);	
		*/
	 }
 }