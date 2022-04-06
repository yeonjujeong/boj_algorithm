N = input()
length = len(N)

sum = 0
if length == 1:
    print(N)

else:
    number = int(N)
    i = 1
    while i < length:
        sum += 9 * pow(10, i-1) * i
        number -= 9 * pow(10, i-1)
        i += 1
    sum += number * i

    print(sum)



