frase = str(input('Digite uma frase')).strip()
print(' a frase tem {} letras A' .format(frase.upper().count('A')))
print(' a primeira letra A aparece na posição {}' .format(frase.upper().find('A')+1))
print(' A última letra A aparece na posição {}' .format(frase.upper().rfind('A')+1))

