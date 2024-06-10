#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>

using namespace std;

void lectura();//funcion

int main(){
    lectura();
    system("pause");
    return 0;
}

void lectura(){
    string text;
    ifstream archivo;
    string texto;
    archivo.open("C:\\proyecto\\house_life_tech\\output\\grabacion.txt",ios::in); //abrir el archivo en modo lectura
    if (archivo.fail()){//verificar si a habido errores
        cout<<"No se pudo abrir el archivo";
    }
    while (!archivo.eof()){//mientras no sea el final del archivo
        getline(archivo,texto);//leer linea por linea y guardarla en la variable texto
        //cout<<texto<<endl;
        if(texto.size()>2)
            text=texto;
    }
    cout<<text<<endl;;
    //cerramos el archivo
    archivo.close();
}
