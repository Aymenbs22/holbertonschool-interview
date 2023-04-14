#!/usr/bin/python3
"""method that calculates the fewest number of operations needed"""


def minOperations(n):
    if n <= 1:
        return 0
    operations = 0
    chars = 1
    inc = 0
    while chars < n:
        if n % chars == 0:
            inc = chars
            operations += 2
            chars += inc
        else:
            operations += 1
            chars += inc
    return operations
