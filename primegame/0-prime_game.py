#!/usr/bin/python3
"""Prime Game who is the winner"""


def isWinner(x, nums):
    """Prime Game"""
    res = 0
    for i in range(x):
        res ^= nums[i]

    if (res == 0 or x % 2 != 0):
        return "Maria"
    elif (res == 0 or x % 2 == 0):
        return "Ben"
    else:
        return None
