prec = float(input('Qual o valor da calça??'))
pag = int(input('Qual a sua forma de pagamento\n 1 - à vista (10% de desconto)\n 2 - à vista no cartão (5% de desconto)\n 3 - 2x no cartão\n 4 - 3x no cartão (juros de 20%)'))
if pag == 1:
    print('O valor da sua calça será de $%{:.2f}'.format(prec * 0.9))
elif pag == 2:
    print('O valor da sua calça será de R${:.2f}'.format(prec * 0.95))
elif pag == 3:
    print('O valor da sua calça seré de R${:.2f}'.format(prec))
elif pag == 4:
    print('O valor da sua calça será de R${:.2f}'.format(prec * 1.2))
else:
    print('Digite uma forma de pagamento válida')
