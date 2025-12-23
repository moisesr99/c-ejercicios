#include <string.h>
#include <fstream>
#include <iostream>

using namespace std;


class leerArchivo
{
	string texto;
	public:
		void ver();
};

void leerArchivo::ver()
{
	ifstream archivo;
	archivo.open("C:/Users/ICE/Desktop/prueba2.txt");
	if (archivo.fail() )
	{
		cout<<"no se encuentra el archivo";
		
	}
	
	while (!archivo.eof())
	{
		getline(archivo,texto);
		cout<<texto;
		
	}
	archivo.close();
}

int main()
{
	leerArchivo ob;
	ob.ver();
}
