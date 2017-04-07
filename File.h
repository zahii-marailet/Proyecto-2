#include <iostream>

using namespace std;

class Cifar{
	
	public:
		
		void setCifrar();
		void setCodigo();
		void setNumero();
		
		string getCodigo();
		int getNumero();
		
		void addCodigo(string Codigo);
		void addNumero(int Numero);
		
	private:
		
		string Codigo;
		int Numero;
};
