#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv){
	
	char codigo[200]; 
		
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
