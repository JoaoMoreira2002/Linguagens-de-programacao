print('Digite os três lados de um triângulo')
l1 = int(input())
l2 = int(input())
l3 = int(input())
x = 0
if (l1 + l2) <= l3:
    print('Esse não é um triângulo válido')
    x = 5
else:
    if (l1 + l3) <= l2:
        print('Esse não é um triângulo válido')
        x = 5
    else:
        if (l2 + l3) <= l1:
            print('Esse não é um triângulo válido')
            x = 5
        else:
            print('Esse é um triângulo válido')
print('{} {} {}'.format(l1, l2, l3))
if l1 == l2 == l3 and x != 5:
    print('Isso é um triângulo equilátero')
elif l1 == l2 or l2 == l3 or l1 == l3 and x != 5:
    print('Isso é um triângulo isóceles')
elif x != 5:
    print('Isso é um triângulo escaleno')
else:
    print('Tente colcoar outros valores')