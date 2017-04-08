#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>
#include "File.h"

using namespace std;

int main(int argc, char** argv){
	
	string codigo, descifrar; 
	int numero, opc;
		
	ofstream Arch("Archivito.txt", ios::in | ios::ate);
	
		cout<<"************MENU************"<<endl;
		cout<<"**"<<setw(26)<<"**"<<endl;
		cout<<"**1) Cifar texto"<<setw(12)<<"**"<<endl;
		cout<<"**2) Descifrar texto"<<setw(8)<<"**"<<endl;
		cout<<"**"<<setw(26)<<"**"<<endl;
		cout<<"****************************"<<endl<<endl;
		cout<<"Seleccione una opcion: ";
		cin>>opc;
		system("cls");
		
		switch(opc){
				
				case 1:
					cout<<"Introduce el mensaje a codificar (solo letras mayusculas): "; 
    				cin>>codigo; 
 
    				cout<<"Introduce el numero de desplazamiento deseado: "; 
    				cin >> numero; 
    				system("cls");
    			
    				for(int i = 0; i < codigo.length(); i++){ 
        				if(codigo[i] >= 'A' && codigo[i] <= 'Z'){ 
           	 				if(codigo[i] + numero>'Z'){ 
              	  				codigo[i] = 'A' - 'Z' + codigo[i] + numero-1; 
            				}else if(codigo[i] + numero<'A'){ 
               	 			codigo[i] = 'Z' - 'A' + codigo[i] + numero+1; 
            						}else{ 
										codigo[i] += numero; 
            						} 
        				} 
    				}
    			
    				cout<<codigo<<endl;
    				Arch.close();
    				break;
    			
    			case 2:
    				ofstream Arch("Archivito.txt", ios::out | ios::app);
    				if(Arch.is_open()){

    					cout<<"Introduce el numero para descifrar: ";
    					cin>>numero;
    					system("cls");
    					
    					descifrar = codigo.size()-numero;
    				}
    				
    				Arch.close();
    				break;
    			
		}
		
		Arch<<codigo<<endl;

	
	Arch.close();
	
	ifstream Arc("Archivito.txt");
	
	system("PAUSE");
	
	return 0;
}
