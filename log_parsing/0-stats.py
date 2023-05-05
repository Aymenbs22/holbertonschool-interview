#!/usr/bin/python3
'''
script that reads stdin line by line and computes metrics
'''
import sys

total_size = 0
status_codes = []

for line in sys.stdin:
    fields = line.strip().split()
    status_code = fields[-2]
    size = int(fields[-1])

    total_size += size
    status_codes.append(status_code)

    if len(status_codes) == 10:
        print("File size:", total_size)
        print('\n'.join(sorted(status_codes)))
        status_codes = []
