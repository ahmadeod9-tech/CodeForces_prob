inp =input()
t=int (input())

for _ in range(t):
    
    x=int(inp.split()[0])
    y=int(inp.split()[1])
    if ( y == x+1 ) or (x > y and (x - y + 1)%9 == 0):
        print("Yes")
    else :
        print("No")