#include <stdio.h>
#include <stdlib.h>
#include "register.h"

// returns the register name for a valid register number
const char* register_name(int r) {
	switch(r) {
		case 0: return "%rax";
		case 1: return "%rbx";
		case 2: return "%rcx";
		case 3: return "%rdx";
		case 4: return "%rsi";
		case 5: return "%rdi";
		case 6: return "%rbp";
		case 7: return "%rsp";
		case 8: return "%r8";
		case 9: return "%r9";
		case 10: return "%r10";
		case 11: return "%r11";
		case 12: return "%r12";
		case 13: return "%r13";
		case 14: return "%r14";
		case 15: return "%r15";
		default: return "Not a valid register";
	}
}

// returns the integer cooresponding to the next open scratch variable 
int register_alloc() {
	// return %rbx if open
	if(!regs[1]) return 1;
	int i = 10;
	while(i < 16) {
		if(!regs[i]) return i;
		++i;
	}
	printf("Ran out of registers to alloc\n");
	exit(1);
}

// free a register
void register_free(int r) {
	if(r < 0 || r > 15) {
		printf("Cannot free register %d.\n", r);
		exit(1);
	}
	regs[r] = 0;
}
