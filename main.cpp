#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>
#include "File.h"

using namespace std;

int main(int argc, char** argv){
	
	char codigo[200]; 
	int numero, opc;
		
	ofstream Arch("Archivito.txt", ios::in | ios::ate);
	
		cout<<"Ingrese el mensaje a cifrar: ";
		cin>>codigo;
		system("cls");
		
		Arch<<codigo<<endl;

	
	Arch.close();
	
	ifstream Arc("Archivito.txt");
	
	Arc.getline(codigo, 200);
	
	system("PAUSE");
	
	return 0;
}
