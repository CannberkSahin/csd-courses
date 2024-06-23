/**
 * @file remote_controller.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * Switch deyiminin gercek uygulamalarda kullanımını 
 * gostermek icin asagidaki kodlar yazilimistir. Kodlar
 * gercekte calismamaktadir sadece simule etmek icin 
 * yazilimistir.
 */
 
 #define    OFF     	0
 #define    ON     		1
 #define    STANDBY     2
 #define    HOLD     	3
 
 int get_remote_case(void) {/* */ return 1; }
 void process_off_state(void) {/* */ }
 void process_on_state(void) {/* */ }
 void process_standby_state(void) {/* */ }
 void process_hold_state(void) {/* */ }
 void process_default_state(void) {/* */ }
 
 int main()
 {
	//...
	switch (get_remote_case()) {
		case OFF: 	  process_off_state(); break;
		case ON: 	  process_on_state(); break;
		case STANDBY: process_standby_state(); break;
		case HOLD: 	  process_hold_state(); break;
		default: 	  process_default_state(); break;
	}
	//...
 }
 
