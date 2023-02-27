n = int(input())
s = []

for i in range(n):
    s.append(input())

s.sort()
s.sort(key=len)

res = dict.fromkeys(s)
res2 = list(res)

for i in range(len(res2)):
    print(res2[i])
