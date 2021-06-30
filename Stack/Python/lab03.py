'''
Parentheses Checker
'''
'''Python'''

with open('lab03.txt', 'r') as f:
    datas = f.readlines()

# print(datas)
for data in datas:
    stack = []
    endflag = False
    print(data, end = '')
    for char in data:
        if char == '(' or char == '{' or char == '[':
            stack.append(char)
        elif char == ')' or char == '}' or char == ']':
            if len(stack) == 0:
                print('UnBalanced, ', end = '')
                print('Right parentheses are more than left parentheses')
                stack.append(char)
                break
            else:
                temp = stack.pop()
                if temp == '(' and char == ')':
                    continue
                elif temp == '{' and char == '}':
                    continue
                elif temp == '[' and char == ']':
                    continue
                else:
                    endflag = True
                    print('UnBalanced, ', end = '')
                    print('Mismatched parentheses are : ', temp, ', ',
                          char, '\n')
                    break
        else:
            continue

    if endflag:
        continue
    else:
        if len(stack) == 0:
            print('Balanced', '\n')
        elif len(stack) != 0:
            continue
        else:
            print('UnBalanced, ', end = '')
            print('Left parentheses are more than right parentheses', '\n')

