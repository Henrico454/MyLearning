#include <iostream>
using namespace std;

int main ()
{
	int num_pedido, quant_pedido;
	float valor, total;
	string pedido;
	cout << "---------------------------------------------------------------------------------" << endl;
	cout << "                             BEM VINDO AO TOPMIX LANCHES                         " << endl;
	cout << "                     temos os melhores lanches de Eugenopolis                    " << endl;
	cout << "---------------------------------------------------------------------------------" << endl;
	cout << "                                 C A R D A P I O                                 " << endl;
	cout << "---------------------------------------------------------------------------------" << endl;
	cout << "[100] - Hamburguer - R$5,50                     [101] - Cachorro quente - R$4,50 " << endl;
	cout << "                                                                                 " << endl;
	cout << "                                                                                 " << endl;
	cout << "[102] - Milkshake - R$7,00                      [103] - Pizza brotinho - R$8,00  " << endl;
	cout << "                                                                                 " << endl;
	cout << "                                                                                 " << endl;
	cout << "                      [104] - Cheeseburguer - R$8,50                             " << endl;
	cout << "---------------------------------------------------------------------------------" << endl;
	cout << "Digite o codigo do pedido: "; 
	cin >> num_pedido;
	switch (num_pedido)
	{
		case 100: pedido="Hamburguers"; valor=5.50; break; 
		case 101: pedido="Cachorros quentes"; valor=4.50; break;
		case 102: pedido=" Milkshakes"; valor=7.00; break;
		case 103: pedido=" Pizzas Brotinho"; valor=8.00; break;
		case 104: pedido="Cheeseburguers"; valor=8.50; break;
		default: cout << "Nao vendemos isso, mil perdoes "<< endl;		
	}
	
	cout << "Quantos " << pedido << " o senhor gostaria de levar ? ";
	cin >> quant_pedido;
	total = quant_pedido * valor;
	cout << "O valor total e de R$" << total << " reais" << endl;
	cout << "Obrigado e volte sempre!!! " << endl;
	
	
	
	
	
	
	
	return 0;
}
