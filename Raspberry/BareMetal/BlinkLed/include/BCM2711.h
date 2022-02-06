/*


ARM BCM2711 Peripherals Header File

Author: Arul Prakash Samathuvamani | hello@arulprakash.dev | 5th February 2022

Changelog:

Add description about two GPIO Pins

*/



// Adding Information about BCM2711 Base Address


#define BCM2711_GPIO_BASE 0x7E200000

// GPF Function Select 0

#define BCM2711_GPIO_GPFSEL0 0x7E200000

// GPF Function select 1

#define BCM2711_GPIO_GPFSEL1 0x7E200004

//GPF function select 2

#define BCM2711_GPIO_GPFSEL2 0x7E200008

//GPF function select 3

#define BCM2711_GPIO_GPFSEL3 0x7E20000C


//GPF Pin output set 0

#define BCM2711_GPIO_GPSET0 0x7E20001C

// GPF Pin output set 1

#define BCM2711_GPIO_GPSET1 0x7E200020

// GPF PIN Output Clear 0

#define BCM2711_GPIO_GPCLR0 0x7E200028

// GPF PIN Ouput Clear 1 

#define BCM2711_GPIO_GPCLR1 0x7E20002C

// GPIO Pin Level 0

#define BCM2711_GPIO_GPLEV0 0x7E200034

// GPIO Pin Level 1

#define BCM2711_GPIO_GPLEV1 0x7E200038



