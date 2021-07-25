valc = float(input('Digite o valor da casa que deseja comprar'))
sal = float(input('Qual o seu salário?'))
temp = int(input('Em quantos anos deseja parcelar?'))
mes = temp * 12
parcela = valc / mes
if parcela > sal * 0.3:
    print('Não será possível realizar o empréstimo')
else:
    print('Seu empréstimo será feito com sucesso')
print('informações {} {} {} {} {} {}'. format(valc, sal, sal * 0.3, temp, mes, parcela))
