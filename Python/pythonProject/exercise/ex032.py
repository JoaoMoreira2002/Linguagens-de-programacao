print('Digite os três lados de um triângulo')
l1 = int(input())
l2 = int(input())
l3 = int(input())
if (l1 + l2) <= l3:
    print('Esse não é um triângulo válido')
else:
    if (l1 + l3) <= l2:
        print('Esse não é um triângulo válido')
    else:
        if (l2 + l3) <= l1:
            print('Esse não é um triângulo válido')
        else:
            print('Esse é um triângulo válido')
print('{} {} {}'.format(l1, l2, l3))