/*
 * main.c

 *
 *  Created on: 05-Jul-2019
 *      Author: DELL
 */
#include<stdint.h>


// this is a const data or ready only data stored in the flash memory of the MCU
char const my_data[]="I love embedded programming";

#define BASE_ADDRESS_OF_SRAM 0x20000000

int main(void)
{

  for(int i=0; i< sizeof(my_data);i++)
 {

     *((uint8_t*) BASE_ADDRESS_OF_SRAM +i)=my_data[i];
 }
  return 0;
}

