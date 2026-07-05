a, b, c = map(int, input().split())
n, m = map(int, input().split())

result = min(a + b + c, n + m + c)

print(result)
