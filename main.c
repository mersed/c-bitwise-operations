#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

#define SYSTEM_PROC 64

int main(int argc, char **argv) {
	int input1, input2, bitwise_and, bitwise_or, bitwise_xor;
	char input1_bin[SYSTEM_PROC+1], input1_bin_1c[SYSTEM_PROC+1], input1_bin_2c[SYSTEM_PROC+1], input2_bin[SYSTEM_PROC+1];
	char *input2_bin_1c = malloc(65);
	char *input2_bin_2c = malloc(65);
	char *bitwise_and_bin = malloc(65);
	char *bitwise_or_bin = malloc(65);
	char *bitwise_xor_bin = malloc(65);

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




	free(input2_bin_1c);
	free(input2_bin_2c);
	free(bitwise_and_bin);
	free(bitwise_or_bin);
	free(bitwise_xor_bin);
	return 0;
}