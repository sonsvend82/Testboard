/**
 * \file
 *
 * \brief Empty user application template
 *
 */

/*
 * Include header files for all drivers that have been imported from
 * Atmel Software Framework (ASF).
 */
#include <asf.h>
// Function declarations
void delay(int32_t);
void DelaySec(int8_t);


// Function defïnitions
void delay(int32_t CountValue){
	volatile int32_t i;

	for (i = 0; i < CountValue; i ++);

}


void DelaySec(int8_t Sec)
{
	volatile int32_t i;
	int8_t j;
	for (j=Sec;j>0;j--) {
		for (i=50000;i>0;i--){
			//do nothing
		}
	}
}



int main(void)
{
	volatile int32_t SecCounter=0;
	board_init();


	while(true){

		DelaySec(1);
		SecCounter++;

		if (!(SecCounter%1)){
			ioport_toggle_pin(LED0);
		}

		if (!(SecCounter%2)){
			ioport_toggle_pin(LED1);
		}

		if (!(SecCounter%4)){
			ioport_toggle_pin(LED2);
		}


		if (!(SecCounter%8)){
			ioport_toggle_pin(LED3);
		}

	}

	return 0;
}
