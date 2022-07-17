/* **************************************************************/
/*       .-.      _______                                       */
/*      {}``; |==|_______D                      Jaime Nevado    */
/*      / ('        /|\                                         */
/*  (  /  |        / | \                             ej3.cpp    */
/*  \(_)_]]      /  |  \                                        */
/*                                                              */
/* ************************************************************ */

/*

Build a procedure that returns a identity square matrix:

*/

#include <iostream>
#include <array>
#include <iomanip>

using namespace std;

const int N = 5;
const int M = 5;
 
typedef array<array<int, N>, M> TMat;

void	printMat(TMat& m);
TMat	identityMat(TMat& m);

int	main(void)
{
	TMat m;
	identityMat(m);
	printMat(m);
	return (0);
}

TMat	identityMat(TMat& m)
{
	int	i = 0;
	int j = 0;
	while (i < N)
	{
        j = 0;
		while (j < M)
		{
			if (j == i)
				m[i][j] = 1;
			else
				m[i][j] = 0;
			j++;
		}
		i++;
	}
	return (m);
}

void	printMat(TMat& m)
{
	int	i = 0;
	int j = 0;
	while (i < N)
	{
        j = 0;
		while (j < M)
		{
			cout << setw(2) << m[i][j] << ", ";
			j++;
		}
        cout << endl;
		i++;
	}
}
