#include <stdio.h>
#include <stdlib.h>
#include "functions.h"


int main(int argc, char **argv) {
	int input1, input2, bitwise_and;
	char *input1_bin = malloc(65 * sizeof(char));
	char *input1_bin_1c = malloc(65 * sizeof(char));
	char *input1_bin_2c = malloc(65 * sizeof(char));
	char *input2_bin = malloc(65 * sizeof(char));
	char *input2_bin_1c = malloc(65 * sizeof(char));
	char *input2_bin_2c = malloc(65 * sizeof(char));
	char *bitwise_and_bin = malloc(65 * sizeof(char));

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

	printf("Binary representation of number %d is %s\n", input1, input1_bin);
	printf("--------------------------------------------------------------------\n");
	printf("1'st complement of %s is %s\n", input1_bin, input1_bin_1c);
	printf("2'nd complement of %s is %s\n\n", input1_bin, input1_bin_2c);


	printf("Binary representation of number %d is %s\n", input2, input2_bin);
	printf("--------------------------------------------------------------------\n");
	printf("1'st complement of %s is %s\n", input2_bin, input2_bin_1c);
	printf("2'nd complement of %s is %s\n\n", input2_bin, input2_bin_2c);

	bitwise_and = input1 & input2;
	dec_to_binary(bitwise_and, bitwise_and_bin);
	printf("Bitwise AND operation(&)\n");
	printf("--------------------------------------------------------------------\n");
	printf("%s\n", input1_bin);
	printf("&\n");
	printf("%s\n", input2_bin);
	printf("--------------------------------\n");
	printf("%s\n", bitwise_and_bin);

	free(input1_bin);
	free(input1_bin_1c);
	free(input1_bin_2c);
	free(input2_bin);
	free(input2_bin_1c);
	free(input2_bin_2c);
	free(bitwise_and_bin);
	return 0;
}