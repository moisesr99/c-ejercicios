//Lbrerias.
#include <stdlib.h>
#include <stdio.h>
//Prototipo de usuario.
	void PedirDatos(int *elemento,int Ne);
	void OrdArreglo(int *elemento,int Ne);
	void ImpArreglo(int *elemento,int Ne);
//Programa principal.
int main(void)
{
	int Ne,*elemento;
	printf("\t\n Digite el numero de elementos que ingresara:\n");
	scanf("%d",&Ne);
	elemento = new int[Ne];
	PedirDatos(elemento,Ne);
	OrdArreglo(elemento,Ne);
	ImpArreglo(elemento,Ne);
	delete []elemento;//Liberar a memoria utilizada para el arreglo.
	return 0;
}  
void PedirDatos(int *elemento,int Ne)
{
	int i;
	for(i=0;i<Ne;i++)
	{
		printf("\t\n Ingrese el numero en la posicion %d:\n",i);
		scanf("%d",&elemento[i]);	
	}
}
void OrdArreglo(int *elemento,int Ne)
{
	int i,j,aux;
	//Ordenar por metodo burbuja.
	for(i=0;i<Ne;i++)
	{
		for(j=0;j<(Ne-1);j++)
		{
			if (elemento[j]>elemento[j+1])
			{
				aux = elemento[j];
				elemento[j] = elemento[j+1];
				elemento[j+1] = aux;
			}
		}
	}
}
void ImpArreglo(int *elemento,int Ne)
{
	int i;
	printf("\t\n Numeros ya ordenados: \n");
	for (i=0;i<Ne;i++)
	{
		printf("\t\n %d",elemento[i]);
	}
} 
