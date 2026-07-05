board = [input().strip() for _ in range(8)]

best = 16

for row_mask in range(1 << 8):
    for col_mask in range(1 << 8):
        valid = True

        for i in range(8):
            for j in range(8):
                painted = ((row_mask >> i) & 1) or ((col_mask >> j) & 1)
                needed_black = board[i][j] == "B"

                if painted != needed_black:
                    valid = False
                    break

            if not valid:
                break

        if valid:
            strokes = row_mask.bit_count() + col_mask.bit_count()
            if strokes < best:
                best = strokes

print(best)
