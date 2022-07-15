/* **************************************************************/
/*       .-.      _______                  			*/
/*      {}``; |==|_______D                	Jaime Nevado	*/
/*      / ('        /|\                    			*/
/*  (  /  |        / | \         	  	     ej1.cpp    */
/*  \(_)_]]      /  |  \                   			*/
/*                                     				*/
/* ************************************************************ */

#include <iostream>
#include <array>

using namespace std;

const int N = 10;
typedef array<int, N> TFreqs;
void printFreqs(TFreqs f);
TFreqs freqsOf(string s, TFreqs f);

int main(void){
    TFreqs a;
    string s = "2 6 8 0 1 3 6 0 0 4 7 7";
    printFreqs(freqsOf(s, a));
    return (0);
}

TFreqs freqsOf(string s, TFreqs f){
    int n;
	int i;

	i = 0;
	while (i < N)
		f[i++] = 0;
	i = 0;
	while (i < int(s.size()))
	{
		n = (s[i] - '0');
        if(n >= 0)
            f[n] += 1;
		i++;
	}
    return (f);
}

 void printFreqs(TFreqs f)
 {
	int	i;

	i = -1;
	while (i++ < N - 1)
		cout << i << ":" << f[i] << " ";
}
