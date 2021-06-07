with open('lab01.dat', 'r') as f:
    lines = f.readlines()

total_word_cnt = 0
for line in lines:
    line = line.replace('\n', '').replace(',', '').replace('.', '')
    line_word_cnt = line.split()
    print(line)
    print('The number of words : ', len(line_word_cnt))
    total_word_cnt += len(line_word_cnt)

print()
print('Total Number of Words : ', total_word_cnt)