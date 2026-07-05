n = int (input())
s = list(map(int , input().split()))

max_len = 1
cur_len = 1
for i in range (1 , n):
    if s[i] > s[i-1] :
            cur_len += 1
            max_len = max(max_len , cur_len)
    else:
         cur_len = 1

print(max_len)
    