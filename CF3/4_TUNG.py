t=int(input())
for _ in range (t):
    x =True 
    s=input()

    p=input()
    s_len , p_len = 0 , 0
    if s[0]!= p[0] or s[len(s) - 1] != p[len(p) - 1]:
        print("NO")
        continue
    if len(p) > 2*len(s) :
        print("NO")
        continue

    while p_len <= len(p)-1 and s_len <= len(s)-1:
        if p[p_len] == s[s_len]:
            p_len += 1
            s_len += 1
            continue
        elif p_len + 1 != len(p) and s[s_len] == p[p_len + 1]:
            p_len += 1
            continue
        
        x=False
        break

    if x and p_len >= len(p) - 1:
        print("YES")
    else :
        print("NO")

