vel = float(input('Digite a velocidade que se carro está'))
if vel > 80:
    print('você deverá pagar uma multa')
    multa = (vel - 80) * 7
    print('Sua multa é de R${:.2f} (7 Reais para cada Km excedente a 80Km)'. format(multa))
else:
    print('Tudo tranquilo')
