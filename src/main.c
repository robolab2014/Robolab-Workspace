#include "../h/main.h"

/* nxtOSEK hook to be invoked from an ISR in category 2 */
void user_1ms_isr_type2(void) {
}

void ecrobot_device_initialize(void) {
	ecrobot_set_light_sensor_active(NXT_PORT_S3);
}

void ecrobot_device_terminate(void) {
	ecrobot_set_light_sensor_inactive(NXT_PORT_S3);
}

void hello_world() {
	display_clear(0);
	display_goto_xy(3,2);
	display_string("Lichtwert aktuell: ");
	display_int(ecrobot_get_light_sensor(NXT_PORT_S3), 4);
	display_update();
}

/*JO */

TASK(OSEK_Main_Task) {
	while (1) {
		hello_world();
		/* 500msec wait */
		systick_wait_ms(500);
	}
}
