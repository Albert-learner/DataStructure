'''
Infix-to-Postfix conversion & Evaluation
'''
from collections import deque

formula = input('Enter Data : ').split()
data_conv = deque()
tmp = ''
for ch in formula:
    if ch.isdigit():
        data_conv.append(ch)
    else:
        tmp = ch
data_conv.append(tmp)



print('1) Echo data (infix form) : ', ''.join(formula))
print('2) Conversion (postfix form) : ', ''.join(data_conv))
print('3) Result (extra point) : ', eval(''.join(formula)))




