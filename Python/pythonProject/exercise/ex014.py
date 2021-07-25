import math

cat1 = int(input('Digite o cateto oposto do triângulo'))
cat2 = int(input('Digite o cateto adjascente do triângulo'))
print('a hipotenusa desse triângulo é de {}' .format(math.sqrt((math.pow(cat1, 2)) + (math.pow(cat2, 2)))))