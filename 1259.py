while True:
    n = input()
    if n == '0':
        break

    check_list1 = ""
    check_list2 = ""
    n_len = len(n)
    part_point = n_len // 2

    if n_len % 2 == 1:
        n = n[:part_point] + n[part_point+1:]  #12321 => 1221

    #애는 point에서 0까지 거꾸로 분할
    for i in range(part_point -1, -1, -1):
        check_list1 += n[i]
    #애는 point에서 문자 끝까지 분할
    for i in range(part_point, len(n)):
        check_list2 += n[i]

    if check_list1 == check_list2:
        print("yes")
    else:
        print("no")
