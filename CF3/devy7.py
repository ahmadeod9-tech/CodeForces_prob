t = int(input())

for _ in range(t):
    num = int(input())
    if '7' in str(num):
        print(0)
        continue
    ops = 1
   
    while True:
        add = int('9' * ops)
        num+=int(add)
        if '7' in str(num):
            print(ops)
            break
        ops += 1