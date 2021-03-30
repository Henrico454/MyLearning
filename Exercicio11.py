# Crie um programa que leia quanto dinheiro a pessoa tem na carteira
# e diga quantos dolares é possivel comprar com aquele dinheiro
carteira = float(input('Quantos reais voce tem ? R$'))
dolar: float = carteira / 5.0
print('com {} reais, voce poderia comprar {} dolares.'.format(carteira, dolar))
