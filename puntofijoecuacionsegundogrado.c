#include<stdio.h>
#include<conio.h>
#include<math.h>

float error;
float raiz,e_test=0, f_x1, f_xr;
float x1;
float xr_ant, xr;

float f_x(float x)
{
return sqrt((5+x)/2);
}

float operaciones(float f_x1, float e)
{
do
{
xr=f_x(x1);
}
while(e_test>e);
f_xr=f_x(xr);

e_test=fabs((xr-f_xr));

raiz=f_xr;
}

int main()
{
printf("\nCalcula la raiz de la funcion x^2-x-5 por el metodo de punto fijo");
printf("\n\nIngresa el valor inicial de X_0");
printf("\nX_0: ");
scanf("%f",&x1);
printf("\nDigita el error permitido: ");
scanf("%f",&error);

operaciones(x1,error);

printf("\nEL valor de la raiz es aproximadamente:%f",raiz);

getch();
return 0;

}
