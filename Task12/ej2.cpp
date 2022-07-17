/* **************************************************************/
/*       .-.      _______                                       */
/*      {}``; |==|_______D                      Jaime Nevado    */
/*      / ('        /|\                                         */
/*  (  /  |        / | \                             ej2.cpp    */
/*  \(_)_]]      /  |  \                                        */
/*                                                              */
/* ************************************************************ */

/*

Build a procedure that fills the matrix m on with random numbers. 
Use the procedure srand(time(0)) to change the seed of the random 
sequence and the function rand() that returns a pseudorandom 
number between 0 and RAND_MAX. Use later printMat from 1

*/

#include <iostream>
#include <array>
#include <iomanip>
#include <time.h>

using namespace std;

const int N = 3;
const int M = 3;
 
typedef array<array<int, N>, M> TMat;

void	printMat(TMat& m);
TMat	randMat(TMat& m);

int	main(void)
{
	TMat m;
    srand(time(0));
	randMat(m);
	printMat(m);
	return (0);
}

TMat	randMat(TMat& m)
{
	int	i = 0;
	int j = 0;
	while (i < N)
	{
        j = 0;
		while (j < M)
		{
			m[i][j] = rand() % RAND_MAX;
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