import sys

n = int(input())
s = []

for _ in range(n):
    s.append(int(sys.stdin.readline()))

s.sort()

for i in s:
    print(i)