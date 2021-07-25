y = 0
x = int(input('Digite um número'))
for c in range(1, 10000001):
    if c != 1 and c != x and x % c != 0:
        y = y + 1
if x == 1:
    print('Esse é um número primo')
elif y == 9999998:
    print('Esse é um número primo')
else:
    print('Esse não é um número primo')
print(y)
