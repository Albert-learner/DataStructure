with open('data1.txt', 'r') as file:
    datas = file.readlines()

sll_lst = []
for data in datas:
    data_sort = data.split()
    sll_lst.append(data_sort)
print('Number 1')
sll_lst.sort(key = lambda x : x[0])
# print(sll_lst)
for sll in sll_lst:
    print(sll)
print()

print('Number 2')
for sll in sll_lst:
    if sll[-1] == 'A':
        print(sll)
print()
sll_lst.clear()

print('Number 3')
with open('data2.txt', 'r') as file:
    extra_datas = file.readlines()
datas += extra_datas
for data in datas:
    data_sort = data.split()
    sll_lst.append(data_sort)

cs_lst = []
for sll in sll_lst:
    if sll[2] == 'CS':
        cs_lst.append(sll)

cs_lst.sort(key = lambda x : x[0])
for sll in cs_lst:
    print(sll)