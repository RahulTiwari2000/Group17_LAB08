#include <stdint.h>
#include "tm4c123gh6pm.h"


void UART0_Init(void);
char UART0_Received(void);
void UART0_Send(char data);
void LED_Init(void);
void LED_ON_OFF(char choice);

int main(void) {

    }
}
void LED_Init(void) {
    SYSCTL_RCGCGPIO_R |= 0x20;
    GPIO_PORTF_DIR_R |= 0x0E;
    GPIO_PORTF_DEN_R |= 0x0E;
}
