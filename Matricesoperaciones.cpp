//Librerias.
#include <stdlib.h>
#include <stdio.h>
//Prototipo de usuario.
	//Funciones lectura
	float   Leer			(void);
	void 	tamatriz		(int *Fila, int *Col);
	void	lecunamatriz	(float a[10][10],int NF,int NC);	
	void	lecdosmatriz	(float a[10][10],float b[10][10],int NF,int NC);
	//Funciones operaciones 1 matriz.
	void	matrizsum		(float a[10][10],float *r,int NF,int NC);
	void	matrizrest		(float a[10][10],float *r,int NF,int NC);
	void	matrizmult		(float a[10][10],float *r,int NF,int NC);
	void	matrizdiv		(float a[10][10],float *r,int NF,int NC);
	void	impresultados2	(float r1);
	//Funciones operaciones 2 matrizes
	void	matrizesum		(float a[10][10],float b[10][10],float c[10][10],int NF,int NC);
	void	matrizerest		(float a[10][10],float b[10][10],float c[10][10],int NF,int NC);
	void	matrizemult		(float a[10][10],float b[10][10],float c[10][10],int NF,int NC);
	void	matrizediv		(float a[10][10],float b[10][10],float c[10][10],int NF,int NC);
	void	impresultados1	(float a[10][10],float b[10][10],float c[10][10],int NF,int NC);
	//Funciones diagonal matriz
	void	diagonsum		(float a[10][10],float *res,int NF,int NC);
	void	diagonrest		(float a[10][10],float *res,int NF,int NC);
	void	diagonmult		(float a[10][10],float *res,int NF,int NC);
	void	diagondiv		(float a[10][10],float *res,int NF,int NC);
	void	impresultados3	(float r2);
//Programa principal.
int main(void)
{
	int	op1,op2;
	int NF,NC;
	float a[10][10],b[10][10],c[10][10],r1,r2;
	do
	{
		printf("\t\n Opcion 1 : Operaciones con 2 matrizes. \n");
		printf("\t\n Opcion 2 : Operaciones con 1 matriz \n");
		printf("\t\n Opcion 3 : Adicion de la diagonal de una matriz. \n");
		printf("\t\n Opcion 4 : Salir \n");
		op1=Leer();
		switch(op1)
		{
			case 1:
			printf("\t\n Opcion 1 : Suma \n");
			printf("\t\n Opcion 2 : Resta \n");
			printf("\t\n Opcion 3 : Multiplicacion \n");
			printf("\t\n Opcion 4 : Division \n");
			printf("\t\n Selecciona una opcion \n");
			op2=Leer();
			switch(op2)
			{
				case 1:
				tamatriz(&NF,&NC);
				lecdosmatriz(a,b,NF,NC);
				matrizesum(a,b,c,NF,NC);
				impresultados1(a,b,c,NF,NC);
				break;
				case 2:
				tamatriz(&NF,&NC);
				lecdosmatriz(a,b,NF,NC);
				matrizerest(a,b,c,NF,NC);
				impresultados1(a,b,c,NF,NC);
				break;
				case 3:
				tamatriz(&NF,&NC);	
				lecdosmatriz(a,b,NF,NC);
				matrizemult(a,b,c,NF,NC);
				impresultados1(a,b,c,NF,NC);
				break;
				case 4:
				tamatriz(&NF,&NC);	
				lecdosmatriz(a,b,NF,NC);
				matrizediv(a,b,c,NF,NC);
				impresultados1(a,b,c,NF,NC);
				break;
			}
			break;
			case 2:
			printf("\t\n Opcion 1 : Suma \n");
			printf("\t\n Opcion 2 : Resta \n");
			printf("\t\n Opcion 3 : Multiplicacion \n");
			printf("\t\n Opcion 4 : Division \n");
			printf("\t\n Selecciona una opcion \n");
			op2= Leer();
			switch(op2)
			{
				case 1:
				tamatriz(&NF,&NC);	
				lecunamatriz(a,NF,NC);
				matrizsum(a,&r1,NF,NC);
				impresultados2(r1);
				break;
				case 2:
				tamatriz(&NF,&NC);	
				lecunamatriz(a,NF,NC);
				matrizrest(a,&r1,NF,NC);
				impresultados2(r1);
				break;
				case 3:
				tamatriz(&NF,&NC);	
				lecunamatriz(a,NF,NC);
				matrizmult(a,&r1,NF,NC);
				impresultados2(r1);
				break;
				case 4:
				tamatriz(&NF,&NC);	
				lecunamatriz(a,NF,NC);
				matrizdiv(a,&r1,NF,NC);
				impresultados2(r1);
				break;
			}
			break;
			case 3:
			printf("\t\n Opcion 1 : Suma \n");
			printf("\t\n Opcion 2 : Resta \n");
			printf("\t\n Opcion 3 : Multiplicacion \n");
			printf("\t\n Opcion 4 : Division \n");
			printf("\t\n Selecciona una opcion \n");
			op2=Leer();
			switch(op2)
			{
				case 1:
				tamatriz(&NF,&NC);	
				lecunamatriz(a,NF,NC);
				diagonsum(a,&r2,NF,NC);
				impresultados3(r2);
				break;
				case 2:
				tamatriz(&NF,&NC);	
				lecunamatriz(a,NF,NC);
				diagonrest(a,&r2,NF,NC);
				impresultados3(r2);
				break;
				case 3:
				tamatriz(&NF,&NC);	
				lecunamatriz(a,NF,NC);
				diagonmult(a,&r2,NF,NC);
				impresultados3(r2);
				break;
				case 4:
				tamatriz(&NF,&NC);	
				lecunamatriz(a,NF,NC);
				diagondiv(a,&r2,NF,NC);
				impresultados3(r2);
				break;
			}
			break;
			default:
			if(op1==4)
			{
			printf("\t\n\n Fin del programa. \n\n");
			}else{
			printf("\t\n\n Opcion no valida. \n\n");	
			}
			break;	
		}
system("pause");
system("cls"); 
	}while(op1!=4);
return 0;	
}
//Lectura.
float Leer (void)
{
	float x;
	scanf("%f" ,&x);
	return x;
}
//Lectura de datos.
void	lecunamatriz(float a[10][10],int NF,int NC)
{
	int i,j;
	printf("\t\n\n Ingresa los datos de la matriz: \n");
	for (i=0;i<NF;i++)
	{
		for (j=0;j<NC;j++)
		{
		scanf("%f",&a[i][j]);
		}
	}
}
void 	tamatriz	(int *Fila, int *Col)
{
	printf("De que tamano quiere su matriz?\n ");
	int x,y;
	printf("Numero de filas:\t ");
	scanf("%d",&x);
	printf("Numero de columnas:\t ");
	scanf("%d",&y);
	*Fila = x;
	*Col = y;
}
void	lecdosmatriz	(float a[10][10],float b[10][10],int NF,int NC)
{
	int i,j;
	printf("\t\n\n Ingresa los datos de la primera matriz: \n");
	for (i=0;i<NF;i++)
	{
		for (j=0;j<NC;j++)
		{
		scanf("%f",&a[i][j]);
		}
	}
	printf("\t\n\n Ingresa los datos de la segunda matriz: \n");
	for (i=0;i<NF;i++)
	{
		for (j=0;j<NC;j++)
		{
		scanf("%f",&b[i][j]);
		}
	}
}
//Operaciones de dos matrizes.
void	matrizesum(float a[10][10],float b[10][10],float c[10][10],int NF,int NC)
{
	int i, j;
	
	for(i = 0; i < NF; i ++){
		for(j = 0; j < NC; j ++){
			c[i][j] = a[i][j] + b[i][j];
		}
	}
}

void	matrizerest(float a[10][10],float b[10][10],float c[10][10],int NF,int NC)
{
	int i, j;
	
	for(i = 0; i < NF; i ++){
		for(j = 0; j < NC; j ++){
			c[i][j] = a[i][j] - b[i][j];
		}
	}
}

void	matrizemult(float a[10][10],float b[10][10],float c[10][10],int NF,int NC)
{
	int i, j;
	
	for(i = 0; i < NF; i ++){
		for(j = 0; j < NC; j ++){
			c[i][j] = a[i][j] * b[i][j];
		}
	}
}

void	matrizediv(float a[10][10],float b[10][10],float c[10][10],int NF,int NC)
{
	int i, j;
	
	for(i = 0; i < NF; i ++){
		for(j = 0; j < NC; j ++){
			c[i][j] = a[i][j] / b[i][j];
		}
	}
}

void	impresultados1(float a[10][10],float b[10][10],float c[10][10],int NF,int NC)
{
	int i, j;
	
	for(i = 0; i < NF; i ++){
		for(j = 0; j < NC; j ++){
		printf("El resultado de la operacion de %0.2f con %0.2f es :%0.2f\n", a[i][j], b[i][j], c[i][j]);	
		}
	printf("\n");
	}
}
//Operaciones con una sola matriz.
void	matrizsum		(float a[10][10],float *r,int NF,int NC)
{
	int i, j;
	float x;
	x = 0;	
	for(i = 0; i < NF; i ++)
	{
		for(j = 0; j < NC; j ++)
		{
			x = x + a[i][j];
		}
	}
	*r = x;
}
void	matrizrest		(float a[10][10],float *r,int NF,int NC)
{
	int i, j;
	float x;
	x = 0;	
	for(i = 0; i < NF; i ++){
		for(j = 0; j < NC; j ++){
			x =x- a[i][j];
		}
	}
	*r = x;
}

void	matrizmult		(float a[10][10],float *r,int NF,int NC)
{
	int i, j;
	float x;
	x = 1;	
	for(i = 0; i < NF; i ++){
		for(j = 0; j < NC; j ++){
			x = x * a[i][j];
		}
	}
	*r = x;
}

void	matrizdiv		(float a[10][10],float *r,int NF,int NC)
{
	int i, j;
	float x;
	x = 1;	
	for(i = 0; i < NF; i ++){
		for(j = 0; j < NC; j ++){
			x = x/a[i][j];
		}
	}
	*r = x;
}

void	impresultados2		(float res)
{
		printf("El resultado de la operacion con toda la matriz es %0f\n", res);	
}
//Operacion de una matriz y su diagonal
void	diagonsum		(float a[10][10],float *res,int NF,int NC)
{
	int i, j;
	float x;
	x = 0;	
	for(i = 0; i <NF; i ++){
		for(j = 0; j < NC; j ++){
			if(i == j)
				x = x + a[i][j];
		}
	}
	*res= x;
}

void	diagonrest		(float a[10][10],float *res,int NF,int NC)
{
	int i, j;
	float x;
	x = 0;	
	for(i = 0; i < NF; i ++){
		for(j = 0; j < NC; j ++){
			if(i == j)
			x = a[i][j]-x;
		}
	}
	*res = x;
}

void	diagonmult		(float a[10][10],float *res,int NF,int NC)
{
	int i, j;
	float x;
	x = 1;	
	for(i = 0; i < NF; i ++){
		for(j = 0; j < NC; j ++){
			if(i == j)
			x = x * a[i][j];
		}
	}
	*res = x;
}

void	diagondiv		(float a[10][10],float *res,int NF,int NC)
{	
	int i, j;
	float x;
	x = 1;	
	for(i = 0; i < NF; i ++){
		for(j = 0; j < NC; j ++){
			if(i == j)
			x = x/a[i][j];
		}
	}
	*res = x;
}

void 	impresultados3	(float r2)
{
		printf("El resultado de la operacion con la diagonal de la matriz es %f\n", r2);	
}
