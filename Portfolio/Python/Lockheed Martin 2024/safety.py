import sys
import math
import string

for case in range(int(input())):
    points = int(input())
    x, y, safe = map(int, input().split())
    for n in range(points):
        x2, y2 = map(int, input().split())
        distance = math.sqrt((x2 - x) ** 2 + (y2 - y) ** 2)
        if distance < float(safe):
            print(f"({x2},{y2}) DANGER")
        else:
            print(f"({x2},{y2}) SAFE")
