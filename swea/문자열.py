#
# 0010011
# 001001100011011
# 0010011000110110001001110011011
#
# 001001100011011000100111001101100010011000110111001001110011011
b = [i+1 for i in range(100)]
b = list(map(str, b))
a = '0010011000110110001001110011011000100110001101110010011100110110001001100011011000100111001101110010011000110111001001110011011'
a = list(a)
for i in range(len(a)):
    if len(a[i]) == 1:
        a[i] = '0'+a[i]
for i in range(len(b)):
    if len(b[i]) == 1:
        b[i] = '0'+b[i]
for i in range(1, 100, 2):
    if i % 4 == 3:
        # if i // 4 % 2:
            print(b[i], end = ' ')
print()
for i in range(1, 100, 2):
    if i % 4 == 3:
        # if i // 4 % 2:

            print(a[i], end = ' ')

# 1  3  5  7  9 11 13 15 17 19 21 23 25 27 29 31 33 35 37 39
# 0  1  0  1  0  1  0  1  0  1  0  1  0  1  0  1  0  1  0  1
# 2  4  6  8 10 12 14 16 18 20 22 24 26 28 30 32 34 36 38 40
# 0  0  1  0  0  1  1  0  0  0  1  1  0  1  1  0  0  0  1  0
# 2  6  10 14 18 22 26 30 34 38
# 0  1  0  1  0  1  0  1  0  1
# 4  8  12 16 20 24 28 32 36 40
# 0  0  1  0  0  1  1  0  0  0