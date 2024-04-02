import sys
import math
import string

for case in range(int(input())):
    candidates = int(input())
    initial = list(map(int, input().split()))
    initialscore = initial[1] + initial[2] + initial[3] + initial[4]
    consider = initial
    for i in range(candidates):
        candidate = list(map(int, input().split()))
        candidatescore = candidate[2] + candidate[2] + candidate[3] + candidate[4]
        considerscore = consider[1] + consider[2] + consider[3] + consider[4]
        if (
            candidatescore < (initialscore - (initialscore * 0.2))
            and candidatescore < considerscore
        ):
            consider = candidate
    lastscore = consider[1] + consider[2] + consider[3] + consider[4]
    print(f"{consider[0]} {lastscore}")
