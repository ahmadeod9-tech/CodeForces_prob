n = int(input())
arr = list(map(int, input().split()))


sequence = [4, 8, 15, 16, 23, 42]

index = {val: i for i, val in enumerate(sequence)}

count = [0] * 6

for num in arr:
    pos = index[num]
    if pos == 0:
        count[0] += 1
    else:
        if count[pos - 1] > 0:
            count[pos - 1] -= 1
            count[pos] += 1


complete_sets = count[5]
used = complete_sets * 6
print(n - used)