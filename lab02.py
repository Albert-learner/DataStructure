'''Recursion 연습'''

def add(n, m):
    if n > m:
        n, m = m, n

    if n == 0:
        return m
    else:
        return add(n - 1, m + 1)

num_1, num_2 = 3, 7
total = add(num_1, num_2)
print('sum = ', total)

'''반복문 사용'''
n, m = 2, 3
while n > 0:
    n -= 1
    m += 1

print('sum = ', m)