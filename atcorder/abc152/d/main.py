import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n = int(input())

memo = [[0 for _ in range(10)] for _ in range(10)]
for i in range(1, n + 1):
    s = str(i)
    memo[int(s[0] )][int(s[-1])] += 1

ans = 0
for i in range(1, 10):
    for j in range(1, 10):
        ans += memo[i][j] * memo[j][i]
print(ans)
