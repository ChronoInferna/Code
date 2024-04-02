import sys
import math
import string

for case in range(int(input())):
    mcount, scenarios = map(int, input().split())
    materials = {}
    for i in range(mcount):
        mat, thick = input().split()
        thick = float(thick)
        materials[mat] = thick
    for i in range(scenarios):
        mat, thickness, rate = input().split()
        thickness, rate = float(thickness), float(rate)
        new_rate = rate - (materials[mat] * thickness)
        if new_rate <= 0:
            print("Infinity")
            continue
        print(f"{(50 / new_rate):.2f}")
