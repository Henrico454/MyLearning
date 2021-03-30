# Escreva um programa que leia em metros
# e mostre convertido em centimetros e milimetros
metro = float(input('Digite a quantidade de metros: '))
cm = metro / 0.010000
mm = metro / 0.00100000
print('a quantidade de metros convertida em centimetros corresponde a {}'.format(cm))
print('A quantidade de metros convertida em milímetros corresponde a {}'.format(mm))