soma = 0
for c in range(0, 6):
    x = int(input('Digite 6 números número'))
    if x % 2 != 0:
        soma = x + soma
    print(x)
print(soma)
