alt = float(input('Qual a altura dessa parede?'))
lar = float(input('Qual a largura dessa parede?'))
area = alt * lar
tinta = area/2
print('a área dessa parede é de {}m² e a quantidade de tinta necessária para pintá-la é de {}L' .format(area,tinta))