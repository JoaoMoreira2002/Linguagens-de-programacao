import datetime

anon = int(input('Digite o ano em que você nasceu'))
anoa = datetime.date.today().year
idade = anoa - anon
if idade < 10:
    print('Você pertence a categoria MIRIM')
elif idade < 15:
    print('Você pertence a categoria INFANTIL')
elif idade < 20:
    print('Você pertence a categoria JUNIOR')
elif idade < 21:
    print('Você pertence a categoria SENIOR')
else:
    print('Você pertence a categoria MASTER')