/* **************************************************************/
/*       .-.      _______                                       */
/*      {}``; |==|_______D                      Jaime Nevado    */
/*      / ('        /|\                                         */
/*  (  /  |        / | \                             ej5.cpp    */
/*  \(_)_]]      /  |  \                                        */
/*                                                              */
/* ************************************************************ */

/*

Build a function that returns the sum of its two TMat pa-
rameters:

*/

#include <iostream>
#include <array>
#include <iomanip>

using namespace std;

const int N = 3;
const int M = 3;
 
typedef array<array<int, N>, M> TMat;

void	printMat(TMat& m);
TMat	sumMats(TMat& m, TMat& n);

int	main(void)
{
	TMat temp;

	TMat matrix1 = {{
        {{1, 10,  7}},
        {{2, 5,  15}},
        {{8, 7,  1}},
    }};
	TMat matrix2 = {{
        {{1, 0,  0}},
        {{0, 1,  0}},
        {{0, 0,  1}},
    }};
	temp = sumMats(matrix1, matrix2);
	printMat(temp);
	return (0);
}

TMat	sumMats(TMat& matrix1, TMat& matrix2)
{
	TMat	solution;
	int		i = 0;
	int		j = 0;

	while (i < N)
	{
		j = 0;
		while (j < M)
		{
			solution[i][j] = matrix1[i][j] + matrix2[i][j];
			j++;		
		}
		i++;
	}
	return(solution);
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
