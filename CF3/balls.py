a, b, c = map(int, input().split())
n, m = map(int, input().split())

exc_red = max(0, a - n)
exc_green = max(0, b - m)

exc_red = min(exc_red, b + c)
exc_green = min(exc_green, a + c)

result = min(a + b + c, n + m + c)

print(result)