pas = float(input('Quantos Km você irá percorrer'))
pas1 = pas * 0.45
pas2 = pas * 0.5
if pas > 200:
    print('Sua passagem saí por R${:.2f}' .format(pas1))
else:
    print('Sua passagem saí por R${:.2f}'.format(pas2))
