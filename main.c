#include <stdio.h>
#include <stdlib.h>
#include "functions.h"


int main(int argc, char **argv) {
	char *binary_number = malloc(65 * sizeof(char));

	dec_to_binary(5, binary_number);
	printf("Ovo je nas binarni broj: %s\n", binary_number );


	free(binary_number);
}