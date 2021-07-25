num1 = int(input('Digite um númemro qualquer'))
num2 = int(input('Digite um outro número'))
num3 = int(input('O último número'))
if num1 > num2:
    if num1 > num3:
        print('O maior número é o {}'.format(num1))
    else:
        print('O maior número é o {}'.format(num3))
if num1 < num2:
    if num2 > num3:
        print('O maior número é o {}'.format(num2))
    else:
        print('O maior número é o {}'.format(num3))

if num1 < num2:
    if num1 < num3:
        print('O menor número é o {}'.format(num1))
    else:
        print('O menor número é o {}'.format(num3))
if num1 > num2:
    if num2 < num3:
        print('O menor número é o {}'.format(num2))
    else:
        print('O menor número é o {}'.format(num3))