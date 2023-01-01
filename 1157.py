sentense = input().upper()
count_list = list(0 for i in range(26))

for i in sentense:
    count_list[ord(i) - 65] += 1

count_max = max(count_list)
cnt = 0

for i in range(26):
    if count_max == count_list[i]:
        cnt += 1
        max_index = i



if cnt == 1:
    print(chr(max_index + 65))
else:
    print('?')
