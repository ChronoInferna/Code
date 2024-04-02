import sys
import math
import string

for case in range(int(input())):
    h, w = map(int, input().split())
    terrain = []
    safe = []
    for i in range(h):
        row = input().split()
        terrain.append(row)
    for index1 in range(h):
        for index2 in range(w):
            cell = terrain[index1][index2]
            if cell[-1] == "W":
                continue
            test = []
            good = True
            if index2 == 0:
                if index1 == 0:
                    test = [
                        (index1, index2 + 1),
                        (index1 + 1, index2),
                        (index1 + 1, index2 + 1),
                    ]
                elif index1 == w - 1:
                    test = [
                        (index1, index2 + 1),
                        (index1 - 1, index2),
                        (index1 - 1, index2 + 1),
                    ]
                else:
                    test = [
                        (index1 - 1, index2),
                        (index1 - 1, index2 + 1),
                        (index1, index2 + 1),
                        (index1 + 1, index2),
                        (index1 + 1, index2 + 1),
                    ]
            elif index2 == h - 1:
                if index1 == 0:
                    test = [
                        (index1, index2 - 1),
                        (index1 + 1, index2 - 1),
                        (index1 + 1, index2),
                    ]
                elif index1 == w - 1:
                    test = [
                        (index1, index2 - 1),
                        (index1 - 1, index2 - 1),
                        (index1 - 1, index2),
                    ]
                else:
                    test = [
                        (index1 - 1, index2 - 1),
                        (index1 - 1, index2),
                        (index1, index2 - 1),
                        (index1 + 1, index2 - 1),
                        (index1 + 1, index2),
                    ]
            elif index1 == 0:
                test = [
                    (index1, index2 - 1),
                    (index1, index2 + 1),
                    (index1 + 1, index2 - 1),
                    (index1 + 1, index2),
                    (index1 + 1, index2 + 1),
                ]
            elif index1 == w - 1:
                test = [
                    (index1 - 1, index2 - 1),
                    (index1 - 1, index2),
                    (index1 - 1, index2 + 1),
                    (index1, index2 - 1),
                    (index1, index2 + 1),
                ]
            else:
                test = [
                    (index1 - 1, index2 - 1),
                    (index1, index2 - 1),
                    (index1 + 1, index2 - 1),
                    (index1 - 1, index2),
                    (index1 + 1, index2),
                    (index1 - 1, index2 + 1),
                    (index1, index2 + 1),
                    (index1 + 1, index2 + 1),
                ]
            for first, second in test:
                if int(terrain[second][first][:-1]) < int(terrain[index1][index2][:-1]):
                    good = False
                    break
            if good == True:
                safe.append([int((terrain[index1][index2][:-1])), index1, index2])
    safe.sort()
    for coord in safe:
        print(f"{coord[0]} {coord[1]} {coord[2]}")
