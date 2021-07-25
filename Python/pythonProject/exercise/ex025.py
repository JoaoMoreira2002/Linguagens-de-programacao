import random
num = random.randint(0, 5)
num1 = int(input('Tente advinhar qual o número que o computador escolheu (o -- 5)'))
if num == num1:
    print('Você acertou')
else:
    print('Você errou')
print('{} era o número correto'.format(num))
