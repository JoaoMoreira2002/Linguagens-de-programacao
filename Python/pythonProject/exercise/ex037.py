import datetime
anon = int(input('Em que ano você nasceu?'))
anoa = datetime.date.today().year
idade = anoa - anon
if idade < 16:
    print('Você ainda não precisa se alistar no exército, sua idade é de {} anos'.format(idade))
elif idade == 16 or idade == 17:
    print('Você já pode se alistar no exército, sua idade é de {} anos'.format(idade))
elif idade == 18:
    print('Você deve se alistar no exército, sua idade é de {} anos'.format(idade))
else:
    print('Seu prazo para se alistar no exército já expirou, terá que pagar uma multa')
