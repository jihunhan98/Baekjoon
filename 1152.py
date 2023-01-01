sentence = input()
word_count = 0

for i in range(len(sentence)):
    if sentence[i] == ' ':
        if i != 0 and i != len(sentence) - 1:
            word_count += 1

if sentence == ' ':
    print(0)
else:
    print(word_count + 1)
