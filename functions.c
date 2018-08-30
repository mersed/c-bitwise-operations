#include "functions.h"

/**
 * Function for converstion of decimal number to its binary representation
 * which are going to be stored in string (array of chars).
 */
void dec_to_binary(int n, char *binary_number) {
	
	int i=0;
	int j;

	while(n>0) {
		binary_number[i] = n%2 ? '1':'0';
		n = n/2;
		i++;
	}

	binary_number[i] = '\0';
}