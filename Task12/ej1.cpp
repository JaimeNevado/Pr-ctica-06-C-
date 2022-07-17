/* **************************************************************/
/*       .-.      _______                                       */
/*      {}``; |==|_______D                      Jaime Nevado    */
/*      / ('        /|\                                         */
/*  (  /  |        / | \                             ej1.cpp    */
/*  \(_)_]]      /  |  \                                        */
/*                                                              */
/* ************************************************************ */

/*

Build a procedure printMat(TMat m) that prints the matrix m on the screen.

*/

#include <iostream>
#include <array>
#include <iomanip>

using namespace std;

const int N = 3;
const int M = 3;
typedef array<array<int, N>, M> TMat;

void	printMat(TMat& m);

int	main(void)
{
	TMat m = {{
        {{1, 10,  7}},
        {{2, 5,  15}},
        {{8, 7,  1}},
    }};
	printMat(m);
	return (0);
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