import sys
# from collections import Counter, deque
# from collections import defaultdict
# from itertools import combinations, permutations, accumulate, groupby, product
# from bisect import bisect_left,bisect_right
# from heapq import heapify, heappop, heappush
# from math import floor, ceil,pi,factorial
# from operator import itemgetter
input = sys.stdin.readline
sys.setrecursionlimit(10**7)

inf = 10**17
mod = 10**9 + 7

s = input()
t = input()

cnt = 0
for i in range(len(s)):
    if s[i] != t[i]:
        cnt += 1

print(cnt)
