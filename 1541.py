sent = input()
n = []
sign = []

unit = ""
for i in sent:
    if (i == '-') or (i == '+'):
        sign.append(i)
        n.append(int(unit))
        unit = ""
    else:
        unit += i

n.append(int(unit))

sum = n[0]
minus_sum = 0
minus_check = False

n = n[1:]

for i in range(len(sign)):
    if sign[i] == '+':
        if minus_check:    #  -2 + 3
            minus_sum = minus_sum + n[i]   # minus_sum = (2+3)
        else:   #  +2 + 3
            sum = sum + n[i]
    if sign[i] == '-':   # -2 - 3
        if minus_check:
            sum = sum - minus_sum
            minus_sum = n[i]
        else:    # +3-2
            minus_check = True
            minus_sum = n[i]

sum = sum - minus_sum
print(sum)

