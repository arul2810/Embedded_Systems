/*


BareMetal Raspberry Blink LED Program

Author: Arul Prakash Samathuvamani | hello@arulprakash.dev | 5th Feb 2022

Changelog:


*/

// Include all the library files

#include <BCM2711.h>

int write_32 ( void *addr , unsigned int value){

	unsigned int *addr_typ = (unsigned int *)addr; // Typecast the input address from void to int

	*addr_typ = value; // Copy the value onto register address

	return 1; // return success

}

int read_32 ( void *addr){

	unsigned int *value; // Variable pointer to store the value at the address

	value = (unsigned int *) addr; // get the address

	return *value; // return the value

}


// calling the main function

void main(void){

	
	// The first step would be to set PIN16 as Input and PIN17 as Output

	unsigned int base_value = read_32 (BCM2711_GPIO_GPFSEL1);

	base_value |= (0 << 20); // set PIN 16 as Input
	base_value |= (1<<21); // set PIN 17 as Output

	int result;


	result = write_32 (BCM2711_GPIO_GPFSEL1, base_value); // Update the value of the registers

	// Intially set the LED as HIGH, if button is pressed, turn it to LOW


	// Set PIN17 as HIGH


	result = write_32 ( BCM2711_GPIO_GPSET0 , 1<<17 ); // Set HIGH for PIN17

	unsigned int button_test_case = ( 1 << 16 );
	unsigned int button_is_off = 0;
	int flag = 1 ; // Flag is HIGH when the LED is ON

	while (1) {
		//Run Always

		//Read the Value of pin 17
		unsigned int read_value;
		read_value = read_32 ( BCM2711_GPIO_GPSET0 );

		read_value &= button_test_case;

		if ( read_value == button_test_case ) {
			// Button Has been pressed
			int flag_button = 1;
			// wait till button press has been stopped
			while(flag_button){
				read_value = read_32 ( BCM2711_GPIO_GPSET0 );
				read_value &= button_test_case;
				// check if the button press has been stopped
				if(read_value != button_test_case){
					flag_button = 0; // yes button is not being pressed
				}
			}

			//Check status of LED

			if (flag){
				// LED is HIGH Turn it off

				unsigned int current_val = read_32 ( BCM2711_GPIO_GPSET0 );
				current_val ^= (1<<17); // We do XOR to flip the bit at PIN 16

				// write the pin

				result = write_32 ( BCM2711_GPIO_GPSET0 , current_val ); 
				flag = 0;
			}else{

				// led is LOW, turn it ON

				unsigned int current_val = read_32 ( BCM2711_GPIO_GPSET0 );
				current_val ^= (1<<17); // We do XOR to flip the bit at PIN 16

				// write the pin

				result = write_32 ( BCM2711_GPIO_GPSET0 , current_val ); 
				flag = 1;


			}
		}



	}





}
