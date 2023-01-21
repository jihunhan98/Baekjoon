n = int(input())
data = []

for _ in range(n):
    data.append(input())

data.sort()

dict = {}
count_list = []  # 각각 책의 개수가 몇개있는지
book_list = []   #어떤 책이 있는지
index = -1

for i in data:
    if dict.get(i) == None:   #처음 보는 책이라면
        book_list.append(i)   #책 이름을 추가해주고
        count_list.append(1)  #그 책의 숫자를 1로
        dict[i] = True   #그리고 이 책은 이제 본적이 있는 책임
        index += 1
    else: #본적이 있는 책이라면
        count_list[index] += 1   #해당 책을 증감

print(book_list[count_list.index(max(count_list))])  #max는 최댓값이 여러개면 최소 인덱스를 반환함.

