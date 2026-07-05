n,m  = map(int, input().split())

a = list(map(int, input().split()))

buses = 0
current = 0

for group in a:
    if current + group <= m:
        current += group
    else:
        buses += 1
        current = group


if current > 0:
    buses += 1

print(buses)