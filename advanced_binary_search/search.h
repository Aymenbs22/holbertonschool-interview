#ifndef _SEARCH_H_
#define _SEARCH_H_

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int advanced_binary(int *array, size_t size, int value);
int binarySearch(int *array, int left, int right, int value);
void print_array(const int *array, int left, int right);

#endif /* _SEARCH_H_ */
