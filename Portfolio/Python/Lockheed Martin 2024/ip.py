import sys
import math
import string

for case in range(int(input())):
    good = True
    IP = input()
    if IP.count(".") != 3:
        print("INVALID")
        continue
    numbers = list(IP.split("."))
    for number in numbers:
        if len(str(number)) == 0:
            good = False
            continue
        if int(number) < 0 or int(number) > 255:
            good = False
            continue
    if good == True:
        print("VALID")
    else:
        print("INVALID")
