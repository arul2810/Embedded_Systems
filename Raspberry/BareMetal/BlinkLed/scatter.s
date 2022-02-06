# Assembly Scatter File by Arul Prakash Samathuvamani
# This is written to work on Raspberry Pi 4 



.section ".text.boot"


.global _start


_start:


	ldr r3, =main 
	blx r3

halt:

	wfe
	b halt

