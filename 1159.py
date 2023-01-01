count_list = list(0 for i in range(26))
n = int(input())

for i in range(n):
    name = input()
    count_list[ord(name[0]) - 97] += 1

ans = ''
for i in range(26):
    if count_list[i] >= 5:
        ans = ans + chr(i + 97)
if ans == '':
    print('PREDAJA')
else:
    print(ans)




