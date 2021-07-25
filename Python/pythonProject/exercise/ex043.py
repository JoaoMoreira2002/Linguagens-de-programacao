import random


print('Este programa é um jogo de JOKEMPO')
print('\033[031m'+'-=-' * 15+'\033[m')
print('\033[034m'+'VOCÊ ESTÁ PREPARADO PARA PERDER???'+'\033[m')
print('\033[031m'+'-=-' * 15+'\033[m')

esco = str(input('\033[034m'+'Digite PEDRA, PAPEL OU TESOURA'+'\033[m')).strip()
comp = random.randint(0, 2)

if comp == 0:
    opo = 'TESOURA'
elif comp == 1:
    opo = 'PAPEL'
else:
    opo = 'PEDRA'
if opo == 'PEDRA' and esco.upper() == 'PEDRA':
    print('O computador fez PEDRA, isso foi um empate')
elif opo == 'PEDRA' and esco.upper() == 'TESOURA':
    print('O computador fez PEDRA, Você perdeu')
elif opo == 'PEDRA' and esco.upper() == 'PAPEL':
    print('O computador fez PEDRA, Você venceu')
elif opo == 'PAPEL' and esco.upper() == 'PEDRA':
    print('O computador fez PAPEL, Você perdeu')
elif opo == 'PAPEL' and esco.upper() == 'TESOURA':
    print('O computador fez PAPEL, Você venceu')
elif opo == 'PAPEL' and esco.upper() == 'PAPEL':
    print('O computador fez PAPEL, Isso foi um empate')
elif opo == 'TESOURA' and esco.upper() == 'PEDRA':
    print('O computador fez TESOURA, Você venceu')
elif opo == 'TESOURA' and esco.upper() == 'TESOURA':
    print('O computador fez TESOURA, Isso foi um empate')
elif opo == 'TESOURA' and esco.upper() == 'PAPEL':
    print('O computador fez TESOURA, Você perdeu')
else:
    print('Digite algo válido, ou está com medo de perder?')
