/* **************************************************************/
/*       .-.      _______                                       */
/*      {}``; |==|_______D                      Jaime Nevado    */
/*      / ('        /|\                                         */
/*  (  /  |        / | \                             ej4.cpp    */
/*  \(_)_]]      /  |  \                                        */
/*                                                              */
/* ************************************************************ */

/*

Build a function to know whether the TSqMat that receives 
is or not diagonal (a diagonal matrix has all its elements 0 
except those on the main diagonal):

*/

#include <iostream>
#include <array>
#include <iomanip>

using namespace std;

const int N = 3;
const int M = 3;
 
typedef array<array<int, N>, M> TMat;

void	printMat(TMat& m);
bool	checkMat(TMat& m);
void	printResults(TMat& m);

int	main(void)
{
	TMat notDiagonal = {{
        {{1, 10,  7}},
        {{2, 5,  15}},
        {{8, 7,  1}},
    }};
	TMat diagonal = {{
        {{1, 0,  0}},
        {{0, 1,  0}},
        {{0, 0,  1}},
    }};
	printResults(diagonal);
	printResults(notDiagonal);
	return (0);
}

void	printResults(TMat& m)
{
	if (checkMat(m) == true)
	{
		printMat(m);
		cout << "La matriz es diagonal" << endl;
	}
	else
	{
		printMat(m);
		cout << "La matriz no es diagonal" << endl;
	}
	cout<< "-------------"<<endl;
}
bool	checkMat(TMat& m)
{
	int	i = 0;
	int j = 0;
	bool diagonal = false;
	while (i < N)
	{
        j = 0;
		while (j < M)
		{
			if (i != j && m[i][j] == 0)
				diagonal = true;
			else if (diagonal == false)
				diagonal = false;
			j++;
		}
		i++;
	}
	return (diagonal);
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

