n = int(input())
for i in range(n):
    input_str = input('Case #{}: '.format(i + 1)).split()
    for s in range(len(input_str) - 1, 0, -1):
        print(input_str[s], end=' ')
    print(input_str[0])
