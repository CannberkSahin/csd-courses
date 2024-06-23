/**
 * @file break_nested_loops.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * İçiçe birden fazla döngü varsa, ve içteki döngülerden birindeyken, yalnızca bu döngüden
 * değil, bütün döngülerden birden çıkılmak isteniyorsa goto deyimi kullanılmalıdır.
 * Aşağıdaki kod parçasında iç içe üç döngü bulunuyor. En içteki döngünün içinde func işlevi
 * çağrılarak işlevin geri dönüş değeri sınanıyor. İşlev eğer 0 değerine geri dönerse
 * programın akışı goto deyimiyle tüm döngülerin dışına yönlendiriliyor: 
 */
 
 int get_alpha(int a, int b, int c);

 int main()
 {
	 /**
	 * Bayrak degişken kullanilarak üç donguyu birden kirarak hepsinden birden
	 * çıkmak için goto deyimi kullanilir.
	 */
	 
	for (int i = 0; i < 1000; ++i) {
		//...
		for (int j = 0; j < 1000; ++j) {
			//...
			for (int k = 0; k < 1000; ++k) {
				//...
				if (get_alpha(i, j, k)) {
					goto out;
				}					
			}
			//statement_x;
		}
		//statement_y;
	}
out: 
	//statemt_z; 
	printf("label sonrasindaki deyim\n");
	 
	/**
	* Oysa goto deyimi kullanmasaydı, ancak bir bayrak (flag) değişkenin kullanılmasıyla aynı
    * amaç gerçekleştirilebilirdi. Her döngünün çıkışında bayrak olarak kullanılan değişkenin
    * değerinin değiştirilip değiştirilmediği sınanmak zorunda kalınırdı. 
	*/	
	int flag = 0;
	
	for (int i = 0; i < 1000; ++i) {
		//...
		for (int j = 0; j < 1000; ++j) {
			//...
			for (int k = 0; k < 1000; ++k) {
				//...
				if (get_alpha(i, j, k)) {
					flag = 1;
				}					
			}
			if (flag) 
				break; 
			//statement_x;
		}
		if (flag)
			break;
		//statement_y;
	}
	//statemt_z;
 }
 
