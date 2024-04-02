import sys
import math
import string

onepoint = ["A", "E", "I", "L", "N", "O", "R", "S", "T", "U"]
twopoints = ["D", "G"]
threepoints = ["B", "C", "M", "P"]
fourpoints = ["F", "H", "V", "W", "Y"]
fivepoints = ["K"]
eightpoints = ["J", "X"]
tenpoints = ["Q", "Z"]

for case in range(int(input())):
    word = list(input())
    score = 0
    for i in word:
        if i in onepoint:
            print(f"{i}=1")
            score += 1
        elif i in twopoints:
            print(f"{i}=2")
            score += 2
        elif i in threepoints:
            print(f"{i}=3")
            score += 3
        elif i in fourpoints:
            print(f"{i}=4")
            score += 4
        elif i in fivepoints:
            print(f"{i}=5")
            score += 5
        elif i in eightpoints:
            print(f"{i}=8")
            score += 8
        elif i in tenpoints:
            print(f"{i}=10")
            score += 10
    print(f"TOTAL={score}")
