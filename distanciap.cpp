#include <iostream>
#include <math.h>

using namespace std;


class distancia
{
	 public:
	float x1,x2,y1,y2,d;
		void leer();
		void calcular();
		void imprimir();
		
};

 void distancia::leer()
 {
 	
 	cout<<"dame el punto x1:";
 	cin>>x1;
 	cout<<"dame el punto x2:";
 	cin>>x2;
 	cout<<"dame el punto y1:";
 	cin>>y1;
 	cout<<"dame el punto y2:";
 	cin>>y2;
 	
 }
 
 void distancia::calcular()
 {
 	d = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
 }
 
 void distancia::imprimir()
 {
 	cout<<"la distancia es : "<< d;

 }
 
 int main()
 {
 	distancia punto;
 	punto.leer();
 	punto.calcular();
 	punto.imprimir();
 }
