#include "functions.h"

/**
 * Function for converstion of decimal number to its binary representation
 * which are going to be stored in string (array of chars).
 */
void dec_to_binary(int n, char *binary_number) {
	int i;
	for(i=0; i<32; i++) {
		binary_number[i] = n & 0x80000000 ? '1':'0';
		n = n << 1;
	}

	binary_number[i] = '\0';
}