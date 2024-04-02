import sys
import math
import string

for case in range(int(input())):
    income = int(input())
    if 0 <= income <= 11000:
        print(int(round(income * 0.1)))
    elif 11001 <= income <= 44725:
        print(int(round(income * 0.12)))
    elif 44762 <= income <= 95375:
        print(int(round(income * 0.22)))
    elif 95376 <= income <= 182100:
        print(int(round(income * 0.24)))
    elif 182101 <= income <= 231250:
        print(int(round(income * 0.32)))
    elif 231251 <= income <= 578125:
        print(int(round(income * 0.35)))
    elif 578126 <= income:
        print(int(round(income * 0.37)))
