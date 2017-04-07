#include <iostream>

#ifndef File
#define File
using namespace std;

class Cifrar{
	
	public:
		
		void setCifrar();
		void setCodigo();
		void setNumero();
		
		string getCodigo();
		int getNumero();
		
		void addCodigo(string Codigo);
		void addNumero(int Numero);
		
		Cifrar();
		
		~Cifrar();
	private:
		
		string Codigo;
		int Numero;
};
#endif
