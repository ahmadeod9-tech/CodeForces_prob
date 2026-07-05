s = list(map(int, input().split()))
r = "IMPOSSIBLE"

for i in range(4):
    for j in range(i + 1, 4):
        for k in range(j + 1, 4):
            a, b, c = sorted((s[i], s[j], s[k]))

            if a + b > c:
                r = "TRIANGLE"
                break

            if a + b == c:
                r = "SEGMENT"
        if r == "TRIANGLE":
            break
    if r == "TRIANGLE":
        break

print(r)
