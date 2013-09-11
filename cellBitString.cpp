#include "cellBitString.h"

#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

cellBitString::cellBitString(int getBases)
{
	bases = getBases;
	chromosome.resize(bases);
};

void cellBitString::showChromosome()
{
	for(int x=0;x<bases;x++)
	{
		cout << chromosome[x];
	}
	cout << endl;
};

