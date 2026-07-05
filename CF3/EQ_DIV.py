n, k = map(int, input().split())
a = list(map(int, input().split()))

possible_targets = set()
for num in a:
    while num >= 0:
        possible_targets.add(num)
        if num == 0:
            break
        num //= 2

min_ops = float('inf')

for target in possible_targets:
    ops_needed = []
    
    for num in a:
        current = num
        steps = 0
        while current > target:
            current //= 2
            steps += 1
        
        if current == target:
            ops_needed.append(steps)
    
    if len(ops_needed) >= k:
        ops_needed.sort()
        total_ops = sum(ops_needed[:k])
        min_ops = min(min_ops, total_ops)

print(min_ops)
