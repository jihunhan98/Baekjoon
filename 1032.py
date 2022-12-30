
t = int(input())
file_list = []  #여러 파일의 이름이 있는 2차원 리스트
new_list = []   #모든 파일에서 같은 인덱스에 있는 문자 ex: new_list[0] => file1[0], file2[0], file3[0] ... 등등

new_file = ""  #정답

for i in range(t):
    file = input()
    file_list.append(file)


#모든 파일에서 같은 인덱스에 있는 문자가 있는 리스트를 만드는 작업
for i in range(len(file_list[0])):
    new = []
    for j in range(len(file_list)):
        new.append(file_list[j][i])
    new_list.append(new)


#any를 이용하여 true면 해당 문자, false면 ?로 변환 후 정답인 new_file에 추가
for new in new_list:
    if all(x == new[0] for x in new):
        new_file = new_file + new[0]
    else:
        new_file = new_file + '?'

print(new_file)







