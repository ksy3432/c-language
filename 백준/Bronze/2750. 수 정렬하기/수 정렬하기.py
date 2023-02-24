n = int(input())
s = []

for i in range(n):
    a = int(input())
    s.append(a)

s.sort()
print(*s)