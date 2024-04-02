import sys
import math
import string

for case in range(int(input())):
    v1, m1, v2, m2 = map(float, input().split(","))
    velocity = ((m1 * v1) + (m2 * v2)) / (m1 + m2)
    print(f"{velocity:.2f}")
