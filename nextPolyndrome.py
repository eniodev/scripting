def polyndrome(number):
    j = len(number) - 1
    t = int(j/2)
    for i in range(0, t+1):
        if(number[i] != number[j]):
            return False
        j = j - 1
    return True


t = int(input())

for i in range(0, t):
    number = input()
    number = str(int(number) + 1)

    while (polyndrome(number) == False):
        number = str((int(number) + 1))

    print(number)
