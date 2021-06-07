'''Find Min and Max numbers'''

data = [90, 40, 60, 10, 50, 80, 20, 70, 15, 25]

# Python
max_cost = max(data)
min_cost = min(data)

print('Minimum number is ', min_cost, 'at position ', data.index(min_cost) + 1)
print('Maximum number is ', max_cost, 'at position ', data.index(max_cost) + 1)

# C++

def findMin(data, n):
    min = data[0]
    for i in range(1, n):
        if data[i] < min:
            min = data[i]
    return min

def findMax(data, n):
    max = data[0]
    for i in range(1, n):
        if data[i] > max:
            max = data[i]
    return max

max_cst = findMax(data, len(data))
min_cst = findMin(data, len(data))

print('Minimum number is ', min_cst, 'at position ', data.index(min_cst) + 1)
print('Maximum number is ', max_cst, 'at position ', data.index(max_cst) + 1)
