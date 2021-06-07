'''Binary Search 문제'''

lst = [20, 40, 30, 10, 70, 50, 80, 60, 100, 90]


lst.sort()
while True:
    cost = int(input('Enter an integer to search : '))
    choice = int(input('Enter method of search : (1. Binary Search 2. Recursive binary search) : '))

    if choice == 1:
        if cost not in lst:
            print(cost, 'is NOT FOUND')
            break
        else:
            for i in range(len(lst)):
                if lst[i] == cost:
                    print(cost, 'is at position', i)
    elif choice == 2:
        if cost not in lst:
            print(cost, 'is NOT FOUND')
            break
        else:
            left, right = 0, len(lst) - 1
            while left <= right:
                middle = (left + right) // 2
                if cost < lst[middle]:
                    right = middle - 1
                elif cost == lst[middle]:
                    print(cost, 'is at position', middle)
                    break
                else:
                    left = middle + 1
    else:
        print('Wront Choice, Quit')
        break