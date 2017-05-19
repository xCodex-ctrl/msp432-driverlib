/* DRIVER Class for CCS Compatible SysTick Clock
  //Sample code to generate 1 Hz Square Wave Signal Using th in built Systick Timer
  
#include "msp.h"
#include "driverlib.h"

int main(void){
  WatchDog_Disable();
  //Register Control of SysTick Corex M4 Module
  *STRVR = 0x16E36000;    //set ststick reload value to 24e^6 therfore the 24MHz clock will decrement systick to 0 every 1 sec = 1 Hz
  //Not using driverlib main control functions for SysTick
  
  while(1){
    if(STCSR & (65536))
      debug_led_toggle();
  }
}



*/
