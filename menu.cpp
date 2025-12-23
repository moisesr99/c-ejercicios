
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float leer (void);
float sumar(float a, float b);
float restar (float a, float b);
float dividir (float a, float b);
float multiplicar (float a, float b);
float discriminante (float j, float k, float l);
float resultado1 (float j, float k, float l, float D);
float resultado2 (float j, float k, float l, float D);

void imprimir (float c);

int main (void)
{
int opcion;
float x, y, z;
float q, w, e, D, x1, x2;
do
{

printf("\n --> MENU <--");
printf( "\n (1) sumar dos numeros");
printf("\n (2) restar dos numeros");
printf ("\n (3) multiplicar dos numeros");
printf("\n (4) dividir dos numero");
printf("\n (5) formula general");
printf("\n (6) salir");


printf("\n introdusca una opcion (1-6) : ");
	 scanf( "%d", &opcion); 




switch (opcion)
{
	case 1:printf("\n---->SUMA<----");
	       printf("\n dame un valor porfavor : ");
           x = leer();
           printf ("\n dame otro valor porfavor : ");
           y = leer ();
           z = sumar (x, y);
           printf("\n el resultado de la suma es: ");
           imprimir (z);
           break;
    case 2:printf("\n---->RESTA<----");
	       printf("\n dame un valor porfavor : ");
           x = leer();
           printf ("\n dame otro valor porfavor : ");
           y = leer ();
           z= restar (x, y);
           printf("\n el resultado de la resta es: ");
           imprimir (z);
           break;
    case 3:printf("\n---->MULTIPLICACION<----");
	       printf("\n dame un valor porfavor : ");
           x = leer();
           printf ("\n dame otro valor porfavor : ");
           y = leer ();
           z= multiplicar (x, y);
           printf("\n el resultado la multiplicacion es : ");
           imprimir (z);
           break;
    case 4:printf("\n---->DIVISION<----");
	       printf("\n dame un valor porfavor : ");
           x = leer();
           printf ("\n dame otro valor porfavor : ");
           y = leer ();
           z= dividir (x, y);
           printf("\n el resultado de la division es : ");
           imprimir (z);
           break;
    case 5:printf("\n---->ECUACION GENERAL<----");
	       printf("\n dame el primer valor : ");
           q = leer ();
           printf ("\n dame el segundo valor : ");
           w = leer ();
           printf ("\n dame el tercer valor : ");
           e = leer();
           D= discriminante (q, w, e);
           printf ("\n el discriminante vale : ");
           imprimir (z);
           if (D>0)

              {
		        x1= resultado1 (q, w, e, D);
	            printf ("\n el primer resultado es : ");
	            imprimir (x1);
	
            	x2= resultado2 (q, w, e, D);
            	printf ("\n el segundo resultado es : ");
	            imprimir (x2);
              }
	
           else
               printf ("\ los resultados son imaginarios D:");
            break;
    case 6:printf("!!HASTA LUEGO!!");
          break;
    default:printf("!!valor inalido!!");
    break;}

}
        while (opcion != 6);
        return 0;
}

float leer (void)
{
	float var;
	scanf("%f", &var);
	return var;
}

float sumar (float a, float b)
{
	float s;
	s= a+b;
	return s;
}

float restar (float a, float b)
{
	float r;
	r= a - b;
	return r;
}

float dividir (float a, float b)
{
	float d;
	d= a/b;
	return d;
}
 float multiplicar (float a, float b)
 {
 	float m;
 	m = a*b;
 	return m;
 	
 }
float discriminante (float j, float k, float l)
{
	float D;
	D= (pow (k,2)) - (4 * (j * l));
	return D;
}
 float resultado1 (float j, float k, float l, float D)
 {
 	float x1;
 	x1= ((-k)+(sqrt(D)))/(2*j);
 	return x1;
 }
float resultado2 (float j, float k, float l, float D)
 {
 	float x2;
 	x2= ((-k)-(sqrt(D)))/(2*j);
 	return x2;
 }
 
 void imprimir (float c)
 {
 	printf("%f", c);
 	
 }
