#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

#define BYTE 8

int main(int argc, char **argv) {
	const int int_bit_length = sizeof(int) * BYTE;
	const int str_length = int_bit_length+1;

	int input1, input2, bitwise_and, bitwise_or, bitwise_xor, bitwise_shift_left1, bitwise_shift_left2, bitwise_shift_left3,
		bitwise_shift_right1, bitwise_shift_right2, bitwise_shift_right3;
	char input1_bin[str_length], input1_bin_1c[str_length], input1_bin_2c[str_length];
	char input2_bin[str_length], input2_bin_1c[str_length], input2_bin_2c[str_length];
	char bitwise_and_bin[str_length], bitwise_or_bin[str_length], bitwise_xor_bin[str_length], bitwise_shift_left1_bin[str_length],
		 bitwise_shift_left2_bin[str_length], bitwise_shift_left3_bin[str_length], bitwise_shift_right1_bin[str_length], 
		 bitwise_shift_right2_bin[str_length], bitwise_shift_right3_bin[str_length];

	printf("Insert first integer (decimal number): ");
	scanf("%d", &input1);
	printf("Insert second integer (decimal number): ");
	scanf("%d", &input2);

	dec_to_binary(input1, input1_bin);
	dec_to_binary(~input1, input1_bin_1c);
	dec_to_binary(~input1+1, input1_bin_2c);

	dec_to_binary(input2, input2_bin);
	dec_to_binary(~input2, input2_bin_1c);
	dec_to_binary(~input2+1, input2_bin_2c);

	printf("\nBinary representation of number %d is %s\n", input1, input1_bin);
	printf("*************************************************************************************\n");
	printf("1'st complement of %s is %s\n", input1_bin, input1_bin_1c);
	printf("2'nd complement of %s is %s\n\n", input1_bin, input1_bin_2c);


	printf("Binary representation of number %d is %s\n", input2, input2_bin);
	printf("--------------------------------------------------------------------\n");
	printf("1'st complement of %s is %s\n", input2_bin, input2_bin_1c);
	printf("2'nd complement of %s is %s\n\n", input2_bin, input2_bin_2c);

	// Bitwise AND
	bitwise_and = input1 & input2;
	dec_to_binary(bitwise_and, bitwise_and_bin);
	printf("Bitwise AND operation(&)\n");
	printf("--------------------------------------------------------------------\n");
	printf("%s\n", input1_bin);
	printf("&\n");
	printf("%s\n", input2_bin);
	printf("--------------------------------\n");
	printf("%s\n\n", bitwise_and_bin);


	// Bitwise OR
	bitwise_or = input1 | input2;
	dec_to_binary(bitwise_or, bitwise_or_bin);
	printf("Bitwise OR operation(&)\n");
	printf("--------------------------------------------------------------------\n");
	printf("%s\n", input1_bin);
	printf("&\n");
	printf("%s\n", input2_bin);
	printf("--------------------------------\n");
	printf("%s\n\n", bitwise_or_bin);

	// Bitwise XOR
	bitwise_xor = input1 ^ input2;
	dec_to_binary(bitwise_xor, bitwise_xor_bin);
	printf("Bitwise XOR operation(^)\n");
	printf("--------------------------------------------------------------------\n");
	printf("%s\n", input1_bin);
	printf("^\n");
	printf("%s\n", input2_bin);
	printf("--------------------------------\n");
	printf("%s\n\n", bitwise_xor_bin);

	// Shift left operation
	bitwise_shift_left1 = input1 << 1;
	bitwise_shift_left2 = input1 << 2;
	bitwise_shift_left3 = input1 << 3;
	dec_to_binary(bitwise_shift_left1, bitwise_shift_left1_bin);
	dec_to_binary(bitwise_shift_left2, bitwise_shift_left2_bin);
	dec_to_binary(bitwise_shift_left3, bitwise_shift_left3_bin);
	printf("Bitwise SHIFT LEFT operation(<<)\n");
	printf("--------------------------------------------------------------------\n");
	printf("%s << 1 = %s\n", input1_bin, bitwise_shift_left1_bin);
	printf("%s << 2 = %s\n", input1_bin, bitwise_shift_left2_bin);
	printf("%s << 3 = %s\n\n", input1_bin, bitwise_shift_left3_bin);

	// Shift right operation
	bitwise_shift_right1 = input2 >> 1;
	bitwise_shift_right2 = input2 >> 2;
	bitwise_shift_right3 = input2 >> 3;
	dec_to_binary(bitwise_shift_right1, bitwise_shift_right1_bin);
	dec_to_binary(bitwise_shift_right2, bitwise_shift_right2_bin);
	dec_to_binary(bitwise_shift_right3, bitwise_shift_right3_bin);
	printf("Bitwise SHIFT RIGHT operation(>>)\n");
	printf("--------------------------------------------------------------------\n");
	printf("%s >> 1 = %s\n", input2_bin, bitwise_shift_right1_bin);
	printf("%s >> 2 = %s\n", input2_bin, bitwise_shift_right2_bin);
	printf("%s >> 3 = %s\n\n", input2_bin, bitwise_shift_right3_bin);


	return 0;
}