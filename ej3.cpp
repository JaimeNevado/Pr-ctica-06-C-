/* **************************************************************/
/*       .-.      _______                  						*/
/*      {}``; |==|_______D                	Jaime Nevado		*/
/*      / ('        /|\                    						*/
/*  (  /  |        / | \         	  			 ej3.cpp		*/
/*  \(_)_]]      /  |  \                   						*/
/*                                        						*/
/* ************************************************************ */

#include <iostream>
#include <cmath>

using namespace std;

struct TComplex
{
    float rPart, iPart;
};

void		printComplex(TComplex);
TComplex	add(TComplex a, TComplex b);
TComplex	subt(TComplex a, TComplex b);
TComplex	mult(TComplex a, TComplex b);
TComplex	mult(TComplex a, float b);
TComplex	div(TComplex a, TComplex b);

//Funciones extra
float 		modulus(TComplex a);
TComplex 	conjugate ( TComplex a);

int	main(void)
{
    float decimal;
    TComplex a = {78 , 104} , b = {-3 , 2};

	decimal = 42;

    printComplex(add(a, b));
    printComplex(subt(a, b));
    printComplex(mult(a, b));
    printComplex(mult(a, decimal));
    printComplex(div(a, b));

	return (0);
}

//MODULO
float	modulos(TComplex a)
{
	float	modulos;

	modulos = sqrt(a.rPart * a.rPart + a.iPart*a.iPart);
	return (modulos);
}

//CONJUGATE
TComplex	conjugate(TComplex a)
{
	a.rPart = a.rPart;
	a.iPart = (-1) * a.iPart; 
	return (a);
}

//Suma
TComplex	add(TComplex a, TComplex b)
{
	TComplex add;

	add.rPart = a.rPart + b.rPart;
	add.iPart = a.iPart + b.iPart;
	return (add);
}

//Resta
TComplex	subt(TComplex a, TComplex b)
{
	TComplex	subt;

	subt.rPart = a.rPart - b.rPart;
	subt.iPart = a.iPart - b.iPart;
	return (subt);
}

//Multiplicación
TComplex	mult(TComplex a, TComplex b)
{
	TComplex	mult;

	mult.rPart = a.rPart*b.rPart - a.iPart*b.iPart;
	mult.iPart = a.rPart*b.iPart + b.rPart*a.iPart;
	return (mult);
}

//Multiplicación float
TComplex	mult(TComplex a, float b)
{
    TComplex    mult2;

    mult2.rPart = a.rPart*b;
    mult2.iPart = a.iPart*b;
    return(mult2);
}

//División
TComplex	div(TComplex a, TComplex b)
{
	TComplex div;

    div = (mult(a, conjugate(b)));
    div.rPart /= modulos(b);
    div.iPart /= modulos(b);
	return (div);
}

void	printComplex(TComplex a)
{
	if (a.iPart < 0)
		cout << a.rPart <<" - "<< (-a.iPart) << "i" << endl;
	else
		cout << a.rPart << " + " << a.iPart << "i" << endl;
}
