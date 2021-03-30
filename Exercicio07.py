# Programa feito para dizer o dobro, o triplo e a raiz quadrada de determinado número
num1 = int(input('Digite um número: '))
dobro = num1 * 2
triplo = num1 * 3
raiz = num1 ** (1/2)
print('O numero escolhido  é {}. Seu dobro é equivalente a {}. Seu triplo corresponde a {}'.format(num1, dobro, triplo))
print('E sua raiz quadrada corresponde a {}'.format(raiz))
