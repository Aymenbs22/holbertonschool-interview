#!/usr/bin/python3
"""method that determines if all the boxes can be opened"""

def canUnlockAll(boxes):
    length = len(boxes)
    keys = [0]
    unlocked = set(keys)
    while keys:
        box = keys.pop()
        for key in boxes[box]:
            if key < length and key not in unlocked:
                unlocked.add(key)
                keys.append(key)
    return len(unlocked) == length
