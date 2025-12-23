#include <string.h>
#include <fstream>
#include <iostream>

using namespace std;


class guarInfArch
{
	int a,x;
	float b,y;
	string c,z;
	public:
		void ini(int,int,float,float,string,string);
		void guardar();
};



void guarInfArch::ini(int A,int X,float Y,float B,string Z,string C)
{
	a=A; b=B; c=C; x=X; y=Y; z=Z;
}

void guarInfArch::guardar()
{
	ofstream archivo;;
	archivo.open("C:/Users/ICE/Desktop/prueba.txt");
	archivo<<a;
	archivo<<b;
	archivo<<c;
	archivo.close();
	

	archivo.open("C:/Users/ICE/Desktop/ejemplo.txt");
	archivo<<x;
	archivo<<y;
	archivo<<z;
	archivo.close();
	
}

int main()
{
	guarInfArch obGuardar;
	obGuardar.ini(728,456,14.16,9.75,"\n ipn esime","\n ZACATENCO");
	obGuardar.guardar();
}
