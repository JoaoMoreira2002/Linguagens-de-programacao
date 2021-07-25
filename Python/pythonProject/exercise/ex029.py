ano = int(input('Em que ano você está?'))
if ano % 100 == 0:
    if ano % 400 == 0:
        print('Esse é um ano bissexto')
    else:
        print('Esse não é um ano bissexto')
else:
    if ano % 4 == 0:
        print('Esse é um ano bissexto')
    else:
        print('Esse não é um ano bissexto')
