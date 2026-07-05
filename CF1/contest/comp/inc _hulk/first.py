low = 1
high = 1000000000

for _ in range(30):
    mid = low + (high - low) // 2
    print(mid, flush=True) 
    response = input()

    if response == "=":
        print(mid)
        break
    elif response == ">":
        low = mid + 1
    elif response == "<":
        high = mid - 1