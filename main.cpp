#include <iostream>
#include <locale>

using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	
	int valor, opcao;
	
	//menu de opções.
	cout << "\n **********MENU**********\n\n";
	cout << "1:          Converter de decimal para hexadecimal\n";
	cout << "2           Converter de hexadecimal para decimal\n";
	cout << "3           Converter de decimal para octal\n";
	cout << "4           Converter de octal para decimal\n";
	cout << "Digite a opção desejada: \n";
	cin >> opcao;
	
	//usei hex, dec e oct para conversão de valores inteiros
	switch(opcao){
		case 1:
			cout << "Digite o decimal: ";
			cin >> valor;
			cout << "Numero convertido para hexadecimal: " << hex << valor;
			break;
		case 2: 
			cout << "Digite o hexadecimal: ";
			cin >> valor;
			cout << "Número convertido para decimal: " << dec << valor;
			break;
		case 3: 
		 	cout << "Digite o decimal: "; 
			cin >> valor;
			cout << "Número convertido para octal: " << oct << valor;
			break;
		case 4:
			cout << "Digite o octal: "; 
			cin >> valor;
			cout << "Número convertido para decimal: " << dec << valor;
		default:
			cout << "Opção inválida";		 		
		
		
	}
	
	
	return 0;
}
