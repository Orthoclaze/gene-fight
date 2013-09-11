#include "cell.h"

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

cell::cell()
{
	bases = 20;
	chromosome.resize(bases);
}

void cell::showChromosome()
{
	for(int x=0;x<bases;x++)
	{
		cout << chromosome[x];
	}
	cout << endl;
}

//int main(){return 0;}
// Put this bit in to compile this thing by itself

