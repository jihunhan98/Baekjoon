cnt1 = 0
cnt2 = 0

def fib(n):
    global cnt1

    if n == 1 or n == 2:
        cnt1 += 1
        return 1

    else:
        return (fib(n-1) + fib(n-2))

def fibonacci(n):
    global cnt2
    fibo_list = [0 for _ in range(n)]
    fibo_list[0] = 1
    fibo_list[1] = 1

    for i in range(2, n):
        cnt2 += 1
        fibo_list[i] = fibo_list[i-1] + fibo_list[i-2]

    return fibo_list[n-1]

n = int(input())


fib(n)
fibonacci(n)

print(cnt1, cnt2)

