/* **************************************************************/
/*       .-.      _______                 			*/
/*      {}``; |==|_______D                	Jaime Nevado	*/
/*      / ('        /|\                    			*/
/*  (  /  |        / | \         	  	     ej1.cpp	*/
/*  \(_)_]]      /  |  \                   			*/
/*                                        			*/
/* ************************************************************ */


#include <iostream>
#include <array>

using namespace std;

const int	N = 400;
typedef array<string, N> Tokens;



//array
// 1, 2, 3, 4
// hola, que, tal


struct TTokens
{
    Tokens s;
    int word;
};

//Funcion
TTokens tokens(string s);

int	main(void)
{
	int	i;
	int	j;
	TTokens juan;

	i = 0;
	j = 0;
	juan = tokens("a number of times, 3 is good");
	while (juan.s[i][j] != '\0')
	{
		while(juan.s[i][j] != '\0')
		{
			cout<<juan.s[i]<<", ";
			j++;
		}
		i++;
	}
	return (0);
}

TTokens	tokens(string s)
{
	int	i;
	int	j;
	Tokens	solucion;
    TTokens a;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] != ' ')
		{
			solucion[j] = s[i];
			i++;
		}
		i++;
		j++;
	}
    a.word = i;
    a.s = solucion;
	return a;
}
