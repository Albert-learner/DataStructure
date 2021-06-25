'''
Stack and Queue
Stack 과 Queue 를 함께 사용하여 "abcde" 를 순서대로 입력하고 "ebcda"를 순서대로
출력하기
'''
from collections import deque

stack = deque(maxlen = 2)
queue = deque(maxlen = 3)

stack_data = 'aea'
queue_data = 'bcda'

for data in stack_data:
    if len(stack) != 2:
        stack.append(data)
    else:
        print('Stack Full')
        break
print(stack)

for data in queue_data:
    if len(queue) != 3:
        queue.append(data)
    else:
        print('Queue Full')
        break
print(queue)

stack_str = ''
while len(stack) != 0:
    data = stack.pop()
    stack_str += data
print(stack_str)

queue_str = ''
while len(queue) != 0:
    data = queue.popleft()
    queue_str += data
print(queue_str)
