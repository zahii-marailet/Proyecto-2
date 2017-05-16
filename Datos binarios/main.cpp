#include <iostream>
#include <fstream>
#include <string.h>
#include <windows.h>

using namespace std;

struct Registro{
    char Nomb[200];
    char Ape[200];
    char Fnaci[11];
    char CI[12];
    float Notas[30];
    char Dir[500];
};

int main(int argc, char *argv[])
{
    Registro Arch, LeerArch;
    
    ofstream Archivo("datos.csv", ios::binary);
    fflush(stdin);
    
    if(Archivo.is_open()){
        
        Arch.Nomb, " ";
        Arch.Ape, " ";
        Arch.Fnaci, " ";
        Arch.CI, " ";
        Arch.Dir, " ";
        Arch.Notas, " ";
        
        Archivo.write((char*) &Arch, sizeof(Registro));
        Archivo.close();
        
    }else{
        cout<<"Error, el archivo no se abrio \n";
    };
    
    ifstream LeerArchivo("datos.csv", ios::binary);
    fflush(stdin);
    
    if(LeerArchivo.is_open()){
        
        LeerArchivo.read((char*) &LeerArch, sizeof(Registro));
        
        cout<<LeerArch.Nomb<<endl;
        cout<<LeerArch.Ape<<endl;
        cout<<LeerArch.Fnaci<<endl;
        cout<<LeerArch.CI<<endl;
        cout<<LeerArch.Notas<<endl;
        cout<<LeerArch.Dir<<endl;
        
        system("PAUSE");
        
    }else{
        
        cout<<"Error al abrir el archivo"<<endl;
    }
    
    
    LeerArchivo.close();
    
}
