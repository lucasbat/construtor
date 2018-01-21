/*
	Uma classe denominada tablet com os seguintes dados membros:
	fabricante, modelo, valor e quantidade
	A classe contem os seguintes metodos:
	construtor / destrutor
	set_dados / print_dados
	Implementado fora da classe
	A funcao principal utiliza a classe tablet com todos seus metodos
*/

#include<iostream>
#include<string>
using namespace std;
class Tablet{
	private:
		string fab, model;
		float valor;
		int quant;
	public:
		Tablet();
		~Tablet();
		void set_dados();
		void print_dados();
};
Tablet::Tablet(){
	fab =  "\nNao informado";
	model = "\nNao informado";
	valor = 0;
	quant = 0;
}
Tablet::~Tablet(){} // destructor
void Tablet::set_dados(){
	cout<<"\nDigite O Fabricante: "; getline(cin,fab);
	cout<<"\nDigite O Modelo: "; getline(cin,model);
	cout<<"\nDigite O Valor: "; cin>>valor;
	cout<<"\nDigite A Quantidade: "; cin>>quant;
	cin.ignore();
	cout<<"\n\n";
}
void Tablet::print_dados(){
	cout<<"\nFabricante: "<<fab;
	cout<<"\nDigite O Modelo: "<<model;
	cout<<"\nDigite O Valor: "<<valor;
	cout<<"\nDigite A Quantidade: "<<quant;
	cout<<"\n\n";
}
int main(){
	Tablet A;
	A.print_dados();
	A.set_dados();
	A.print_dados();

	cout<<"\n\n";
	return 0;
}
