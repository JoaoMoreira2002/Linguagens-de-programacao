print('Digite o primeiro termo, e a razão de uma PA')
x = int(input('Primeiro termo'))
y = int(input('Razão'))
for n in range(0, 11):
    print('{}'.format(x + ((n - 0) * y)))
print('Esses são os 10 primeiros termos')