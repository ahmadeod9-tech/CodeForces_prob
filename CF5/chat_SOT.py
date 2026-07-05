import sys

participants = set()
traffic = 0

for line in sys.stdin:
    line = line.rstrip("\n")

    if not line:
        continue

    if line[0] == '+':
        name = line[1:]
        participants.add(name)

    elif line[0] == '-':
        name = line[1:]
        participants.remove(name)

    else:
        sender, message = line.split(":", 1)
        traffic += len(message) * len(participants)

print(traffic)
