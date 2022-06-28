
def oneLine(line):
    line = line + ' '
    ch = ''
    lst = []
    for el in line:
        ch = ch + el
        if(el == ' '):
            lst.append(int(ch))
            ch = ''
    return lst


list = [3, 5, 9, 7, 1, 3]
i = 0
c = 0
t = int(input())
line = input()
list = oneLine(line)
for i in range(0, len(list)-2):
    if(((list[i] + list[i+1]) % 2 != 0)):
        list.pop(i+1)
        i = i - 1
        c = c + 1

print(c)
