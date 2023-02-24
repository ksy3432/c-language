n = int(input())
s = [] # 스택 리스트

for i in range(n): 
    a = int(input())
    if(a == 0): 
        s.pop()
    else:
        s.append(a) 
        
print(sum(s))