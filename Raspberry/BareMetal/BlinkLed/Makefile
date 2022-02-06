default:

	arm-none-eabi-as -o scatter.o scatter.s
	arm-none-eabi-gcc -c -o  hello.o hello.c -I ./include
	arm-none-eabi-gcc -T linker.ld -o kernel7.elf scatter.o hello.o -ffreestanding -O2 -nostdlib -lgcc
	arm-none-eabi-objcopy kernel7.elf -O binary kernel7.img

