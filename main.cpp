#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>
#include "File.h"

using namespace std;

string codigo, descifrar; 
int numero, opc;
string temporal;

void decodificar(int numero, string & codigo){ 
	
	for(int i = 0; i < codigo.length(); i++){ 
        if(codigo[i] >= 'A' && codigo[i] <= 'Z'){ 
           	if(codigo[i] - numero>'Z'){ 
              	  	codigo[i] = 'A' - 'Z' + codigo[i] - numero-1; 
            }else if(codigo[i] - numero<'A'){ 
               	codigo[i] = 'Z' - 'A' + codigo[i] - numero+1; 
            }else{ 
				codigo[i] -= numero; 
            } 
        } 
    }
}

int main(int argc, char** argv){
		
	
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
			
			if(opc==1){
				
				case 1:
					
					ofstream Arch("Archivito.txt", ios::trunc);
					fflush(stdin);
					cout<<"Introduce el mensaje a codificar (solo letras mayusculas): "; 
    				getline(cin,codigo); 
 
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
    			
    				cout<<"Mensaje codificado: "<<codigo<<endl;
    				
    				Arch<<codigo<<endl;
    				Arch.close();
    				break;
    			}
    			
    			case 2:{
    				fflush(stdin);
    				cout<<"Introduce el numero de desplazamiento deseado: "; 
    				cin >> numero; 
    				system("cls");
    				
					ifstream Imprimir("Archivito.txt");
    				cout<<"Mensaje Decodificado:";
					if(Imprimir.is_open()){
						while(getline(Imprimir,temporal)){
							decodificar(numero, temporal);
							cout<<temporal<<endl;	
						
						}
					}else{
						cout<<"No se imprimio";
					}
					
					Imprimir.clear();
					Imprimir.close();
					break;
				}
    			
		}

	system("PAUSE");
	
	return 0;
}
