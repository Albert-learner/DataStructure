'''Recursive 연습'''

def Fibo(n):
    if n == 1:
        print(n, ' = ', end = ' ')
        return 1
    else:
        print(n, ' + ', end = ' ')
        return n + Fibo(n - 1)

n = 3
sum_n = Fibo(n)
print(sum_n)

'''반복문 연습'''
total = 0
n = 3
for i in range(1, n + 1):
    if i == n:
        total += i
        print(n + 1 - i, end = ' ')
        break
    else:
        total += i
        print(n + 1 - i, ' + ', end = ' ')

print(' = ', total)

'''임의의 두 숫자에 대한 덧셈과 뺄셈'''
num1 = int(input('Enter number 1 : '))
num2 = int(input('Enter number 2 : '))
n, m = num1, num2


while n > 0:
    n -= 1
    m += 1

while num1 > 0:
    num1 -= 1
    num2 -= 1

print('Addition Result is ', m)
print('Difference Result : ', num2)

