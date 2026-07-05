n, k = map(int, input().split())
a = list(map(int, input().split()))

m = float('inf')

val = {}
for i in range(n):
    current = a[i]
    ops = 0
    while current >= 0:
        if current not in val:
            val[current] = []
        val[current].append(ops)
        if current == 0:
            break
        current //= 2
        ops += 1

for value, op_l in val.items():
    if len(op_l) >= k:
        op_l.sort()
        total_ops = sum(op_l[:k])
        m = min(m, total_ops)

print(m)
