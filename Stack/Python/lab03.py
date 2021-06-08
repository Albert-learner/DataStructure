'''Parentheses Checker'''

with open('lab03.txt', 'r') as f:
    datas = f.readlines()

'''Python'''
for data in datas:
    stack = []
    for char in data:
        if char == '(' or char == '{' or char == '[':
            stack.append(char)
        elif char == ')' or char == '}' or char == ']':
            if stack is None:
                print('UnBalanced.')



