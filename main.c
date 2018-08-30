#include <stdio.h>
#include <stdlib.h>
#include "functions.h"


int main(int argc, char **argv) {
	int input;
	char *binary_num = malloc(65 * sizeof(char));
	char *binary_num_1_compl = malloc(65 * sizeof(char));

	printf("Insert integer (decimal number) in order to apply binary operations: ");
	scanf("%d", &input);

	dec_to_binary(input, binary_num);
	dec_to_binary(~input, binary_num_1_compl);


	printf("Binary representation of number %d is %s\n", input, binary_num);
	printf("--------------------------------------------------------------------\n");
	printf("First complement of %s is %s\n", binary_num, binary_num_1_compl);


	free(binary_num);
	free(binary_num_1_compl);
	return 0;
}