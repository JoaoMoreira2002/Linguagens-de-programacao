sal = float(input('Digite o valor do seu salário'))
if sal > 1250.00:
    print('Seu novo salário é de {:.2f}'.format(sal * 1.10))
else:
    print('Seu novo salário é de {:.2f}'.format(sal * 1.15))
