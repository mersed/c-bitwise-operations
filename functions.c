#include "functions.h"

/**
 * Function for converstion of decimal number to its binary representation
 * which are going to be stored in string (array of chars).
 */
void dec_to_binary(int n, char *binary_number) {
	unsigned int i;
	int mask = 1 << (sizeof(int) * BYTE) - 1;

	for(i=0; i<(sizeof(int) * BYTE); i++) {
		binary_number[i] = n & mask ? '1':'0';
		n = n << 1;
	}

	binary_number[i] = '\0';
}