not1= float(input('Digite sua nota 1'))
not2 = float(input('Digite sua nota dois'))
med = (not1 + not2) / 2
if med < 5:
    print('Você está reprovado')
elif 5 < med < 6.9:
    print('Você está de recuperação')
else:
    print('Você está aprovado')
